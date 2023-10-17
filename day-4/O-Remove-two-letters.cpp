#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T ;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i <= n - 2; i++)
        {
            if (i == n - 2)
            {
                ans++;
                break;
            }
            else
            {
                if (s[i] == s[i + 2])
                {
                    continue;
                }
                else
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
 
    return 0;
}