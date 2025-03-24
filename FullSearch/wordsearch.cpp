#include <bits/stdc++.h>
using namespace std;

bool wordsearch(vector<vector<string>> &matrix, string &word, int row, int column, int n, int m, int index) {
    // Boundary checks
    if (row < 0 || column < 0 || row >= n || column >= m) {
        return false;
    }
    
    // Check if the current character matches
    if (matrix[row][column] != string(1, word[index])) {
        return false;
    }

    // If all characters are matched
    if (index == word.size() - 1) {
        return true;
    }

    // Mark the cell as visited
    string temp = matrix[row][column];
    matrix[row][column] = "#";  // Mark as visited to avoid reuse

    // Search in four directions
    bool found = wordsearch(matrix, word, row - 1, column, n, m, index + 1) ||  // Up
                 wordsearch(matrix, word, row + 1, column, n, m, index + 1) ||  // Down
                 wordsearch(matrix, word, row, column - 1, n, m, index + 1) ||  // Left
                 wordsearch(matrix, word, row, column + 1, n, m, index + 1);    // Right

    // Backtrack
    matrix[row][column] = temp;

    return found;
}

int main() {
    int n, m;
    string word;
    cin >> n >> m >> word;
    
    vector<vector<string>> matrix(n, vector<string>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    bool found = false;
    for (int i = 0; i < n && !found; i++) {
        for (int j = 0; j < m && !found; j++) {
            if (wordsearch(matrix, word, i, j, n, m, 0)) {
                found = true;
            }
        }
    }

    cout << (found ? "1" : "0") << endl;
    return 0;
}
