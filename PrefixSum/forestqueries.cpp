#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<vector<int>> matrix(n, vector<int>(n));

    // Input matrix
    for (int i = 0; i < n; i++) { // y-axis
        for (int j = 0; j < n; j++) { // x-axis
            char symbol;
            cin >> symbol;
            matrix[i][j] = (symbol == '*') ? 1 : 0;
        }
    }

    // Prefix sum array
    vector<vector<int>> prefix(n + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] 
                         - prefix[i - 1][j - 1] + matrix[i - 1][j - 1];
        }
    }

    // Query processing
    while (q--) {
        int x1, y1, x2, y2;
        cin >> y1 >> x1 >> y2 >> x2; // input as row, col format
        int result = prefix[y2][x2] - prefix[y1 - 1][x2] 
                   - prefix[y2][x1 - 1] + prefix[y1 - 1][x1 - 1];
        cout << result << endl;
    }

    return 0;
}
