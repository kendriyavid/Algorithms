#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    // Difference array
    vector<vector<int>> matrix(1002, vector<int>(1002, 0));

    while (n--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        // Apply difference array technique
        matrix[y1][x1]++;  // Top-left corner
        matrix[y1][x2 + 1]--; // Right of the top-left
        matrix[y2 + 1][x1]--; // Below the top-left
        matrix[y2 + 1][x2 + 1]++; // Bottom-right corner adjustment
    }

    // Build the prefix sum to recover the actual values
    for (int i = 0; i < 1001; i++) {
        for (int j = 0; j < 1001; j++) {
            if (i > 0) matrix[i][j] += matrix[i - 1][j];
            if (j > 0) matrix[i][j] += matrix[i][j - 1];
            if (i > 0 && j > 0) matrix[i][j] -= matrix[i - 1][j - 1];
        }
    }

    // Count number of cells with value ≥ k
    int result = 0;
    for (int i = 0; i < 1001; i++) {
        for (int j = 0; j < 1001; j++) {
            if (matrix[i][j] >= k) result++;
        }
    }

    cout << result << endl;
    return 0;
}
