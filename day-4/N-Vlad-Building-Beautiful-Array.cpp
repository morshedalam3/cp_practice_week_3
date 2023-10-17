#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;

        cin >> n;

        vector<int> v(n);

        for (auto &itr : v)
            cin >> itr;

        sort(v.begin(), v.end());

        int od = 0, ev = 0;

        for (auto itr : v)
        {
            if (itr & 1)
                ++od;
            else
                ++ev;
        }

        bool ok = false;
        if (v[0] & 1)
        {
            ok = true;
        }
        else
        {
            if (od >= 1)
                ok = false;
            else
                ok = true;
        }

        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}