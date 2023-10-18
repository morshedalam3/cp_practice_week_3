#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string S)
{
    string ans = "";
    ans += S[0];
    for (int i = 1; i < S.size(); ++i)
    {
        if (ans.back() == S[i])
            continue;
        else
            ans.push_back(S[i]);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        transform(str.begin(), str.end(), str.begin(), ::tolower);
        string here = removeDuplicates(str);
        string str1 = "meow";

        if (here == str1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}