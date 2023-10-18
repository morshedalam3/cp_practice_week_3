#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {

        int n, m;
        cin >> n >> m;
        bool one = false;

        vector<int> visited(1001, 0);
        vector<int> v(n);
        int maxi = -1e9;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            maxi = max(maxi, v[i]);
            ++visited[v[i]];
        }

        if (m == 0)
        {
            one = true;
        }
        else
        {
            for (int i = 1; i < visited.size(); ++i)
            {
                if (m == 0)
                {
                    one = true;
                    break;
                }
                else if (m < 0)
                {
                    one = false;
                    break;
                }

                if (!visited[i])
                {
                    m -= i;
                    maxi = max(maxi, i);
                    ++visited[i];
                }
            }
        }

        for (int i = 1; i <= maxi; ++i)
        {
            if (!visited[i])
            {
                one = false;
                break;
            }
        }
        if (one)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}