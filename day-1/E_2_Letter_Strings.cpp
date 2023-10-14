// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<string> strings(n);
//         for (int i = 0; i < n; i++) {
//             cin >> strings[i];
//         }

//         long long count = 0;

//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 int differingCount = 0;

//                 for (int k = 0; k < 2; k++) {
//                     if (strings[i][k] != strings[j][k]) {
//                         differingCount++;
//                     }
//                 }

//                 if (differingCount == 1) {
//                     count++;
//                 }
//             }
//         }

//         cout << count << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    map<string, int> memo;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      for (int j = 0; j < 2; j++) {
        for (char c = 'a'; c <= 'k'; c++) {
          if (s[j] == c) {
            continue;
          }
          string ns = s;
          ns[j] = c;
          ans += memo[ns];
        }
      }
      memo[s]++;
    }
    cout << ans << endl;
  }
  return 0;
}