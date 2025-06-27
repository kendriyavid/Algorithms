#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int,int>> movements = {{1,0},{0,1},{-1,0},{0,-1}};
    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    queue<pair<int, int>> q;
    int fresh = 0;

    // Initialize the queue with all rotten oranges
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] == 2) {
                q.push({i, j});
            }
            if(matrix[i][j] == 1) {
                fresh++;
            }
        }
    }

    int time = 0;

    while(!q.empty() && fresh > 0) {
        int sz = q.size();
        for(int i = 0; i < sz; i++) {
            auto [x, y] = q.front(); q.pop();
            for(auto [dx, dy] : movements) {
                int nx = x + dx, ny = y + dy;
                if(nx >= 0 && nx < m && ny >= 0 && ny < n && matrix[nx][ny] == 1) {
                    matrix[nx][ny] = 2;
                    q.push({nx, ny});
                    fresh--;
                }
            }
        }
        time++;  // ✅ increment time after each level
    }

    cout << (fresh == 0 ? time : -1) << endl;
    return 0;
}
