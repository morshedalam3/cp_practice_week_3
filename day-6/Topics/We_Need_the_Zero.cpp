#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (auto &itr : v)
            cin >> itr;

        int maxi = pow(2, 8);

        int ans = -1;

        for (int i = 0; i <= maxi; ++i)
        {

            vector<int> vs(n);

            for (int j = 0; j < n; ++j)
            {
                vs[j] = v[j] ^ i;
            }

            int res = 0;

            for (int k = 0; k < n; ++k)
            {
                res ^= vs[k];
            }

            if (res == 0)
            {
                ans = i;
                break;
            }
        }

        cout << (ans == -1 ? -1 : ans) << endl;
    }
    return 0;
}