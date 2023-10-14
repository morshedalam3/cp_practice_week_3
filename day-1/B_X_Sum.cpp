#include <bits/stdc++.h>
using namespace std;

int findMaxSum(vector<vector<int>>& board, int n, int m) {
    int maxSum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int curSum = board[i][j];

            // Diagonal attack in all four directions
            for (int k = 1; i - k >= 0 && j - k >= 0; k++) {
                curSum += board[i - k][j - k];
            }
            for (int k = 1; i - k >= 0 && j + k < m; k++) {
                curSum += board[i - k][j + k];
            }
            for (int k = 1; i + k < n && j - k >= 0; k++) {
                curSum += board[i + k][j - k];
            }
            for (int k = 1; i + k < n && j + k < m; k++) {
                curSum += board[i + k][j + k];
            }

            maxSum = max(maxSum, curSum);
        }
    }

    return maxSum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> board(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> board[i][j];
            }
        }
        int result = findMaxSum(board, n, m);
        cout << result << endl;
    }

    return 0;
}
