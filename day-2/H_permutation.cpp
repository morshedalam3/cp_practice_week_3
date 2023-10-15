#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> v(n, vector<int>(n - 1));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n - 1; ++j)
                cin >> v[i][j];
        }

        vector<int> count(n + 2, 0);
        count[0] = 1;

        vector<int> take = v[0];
        for (int itr : take)
        {
            ++count[itr];
        }
        int miss = -1;
        for (int i = 1; i < count.size(); ++i)
        {
            if (count[i] == 0)
            {
                miss = i;
                break;
            }
        }
        int x = -1, y = -1;

        for (int i = 0; i < n; ++i)
        {
            int ok = 0;
            for (int k = 0; k < n; ++k)
            {
                if (i == k)
                    continue;
                if (v[i][1] == v[k][0])
                {
                    x = i, y = k, ok = 1;
                    break;
                }
            }
            if (ok)
                break;
        }

        cout << v[x][0] << " ";
        for (int i = 0; i < n - 1; ++i)
            cout << v[y][i] << " ";
        cout << endl;
    }
    return 0;
}