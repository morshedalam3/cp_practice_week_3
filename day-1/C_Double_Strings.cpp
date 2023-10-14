#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> strings(n);
        for (int i = 0; i < n; i++) {
            cin >> strings[i];
        }

        unordered_set<string> uniqueStrings;


        for (const string& s : strings) {
            uniqueStrings.insert(s);
        }

        vector<int> result(n, 0);

       
        for (int i = 0; i < n; i++) {
            for (int len = 1; len < strings[i].size(); len++) {
                string prefix = strings[i].substr(0, len);
                string suffix = strings[i].substr(len);

                if (uniqueStrings.count(prefix) && uniqueStrings.count(suffix)) {
                    result[i] = 1;
                    break;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << result[i];
        }
        cout << endl;
    }

    return 0;
}
