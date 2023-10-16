#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        unordered_map<string, int> mp;

        for (int i = 0; i < n - 1; ++i)
        {
            string curr;
            curr.push_back(str[i]);
            curr.push_back(str[i + 1]);
            ++mp[curr];
        }

        cout << mp.size() << endl;
    }
    return 0;
}