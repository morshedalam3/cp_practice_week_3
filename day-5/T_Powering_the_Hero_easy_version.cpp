#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        multiset<int, greater<int>> s;
        long long ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] == 0 and !s.empty())
            {
                ans += *s.begin();
                s.erase(s.begin());
            }
            else if (v[i] != 0)
                s.insert(v[i]);
        }

        cout << ans << endl;
    }
    return 0;
}