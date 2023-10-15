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
        
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        int ans = 0;

        for (auto itr : v)
        {
            if (mp[itr - 1] > 0)
            {
                ++mp[itr];
                --mp[itr - 1];
            }
            else
            {
                ++ans;
                ++mp[itr];
            }
        }

        cout << ans << endl;
    }
    return 0;
}