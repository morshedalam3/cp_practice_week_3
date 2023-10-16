#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);

        for (auto &itr : a)
            cin >> itr;

        for (auto &itr : b)
            cin >> itr;

        vector<pair<int, int>> here;

        for (int i = 0; i < n; ++i)
        {
            here.push_back({a[i], i});
        }

        sort(here.begin(), here.end());
        sort(b.begin(), b.end());

        vector<int> ans(n);

        for (int i = 0; i < n; ++i)
        {
            ans[here[i].second] = b[i];
        }

        for (auto itr : ans)
            cout << itr << " ";
        cout << endl;
    }
    return 0;
}