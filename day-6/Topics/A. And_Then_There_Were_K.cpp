// problem: https://codeforces.com/contest/1527/problem/B1
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         int one = 0, zero = 0;
//         for (auto i : s)
//         {
//             if (i == '0')
//                 zero++;
//             else
//                 one++;
//         }
//         if (zero == 1 || zero % 2 == 0)
//             cout << "BOB"
//                  << endl;
//         else
//             cout << "ALICE"
//                  << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using  namespace  std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long ans=1;
        while(ans<=n)
        {
            ans*=2;
        }
        ans/=2;
        ans--;
        cout<<ans<<endl;
    }
    return 0;
}
