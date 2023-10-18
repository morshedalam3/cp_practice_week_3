#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<char, int> mp;
        string str;
        cin >> str;

        for (auto itr : str)
            ++mp[itr];

        int cnt = 0;

        for (int i = 0; i < n; ++i)
        {
            if (mp[str[i] - 32] > 0 and mp[str[i]] > 0)
            {
                --mp[str[i] - 32];
                ++cnt;
                --mp[str[i]];
            }
            else if (mp[str[i] + 32] > 0 and mp[str[i]] > 0)
            {
                --mp[str[i] + 32];
                ++cnt;
                --mp[str[i]];
            }
        }

        for (auto itr : mp)
        {
            if (k > 0)
            {
                if (itr.second >= 2 and k)
                {
                    int have = itr.second / 2;

                    int canTake = min(have, k);

                    cnt += canTake;
                    k -= canTake;
                }
            }
        }

        cout << cnt << endl;
    }
    return 0;
}