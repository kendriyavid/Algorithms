#include <bits/stdc++.h>
using namespace std;

int main(){
    // int t;
    // cin >> t;
    // while(t--){
    //     int n;
    //     cin >> n;
    //     vector<vector<int>> mat(n, vector<int>(n));

    //     // Input
    //     for(int i = 0; i < n; i++){
    //         for(int j = 0; j < n; j++){
    //             cin >> mat[i][j];
    //         }
    //     }

    //     // int moves = 0;

    //     // // Traverse all diagonals with d = i - j
    //     // for(int d = -(n - 1); d <= (n - 1); d++){
    //     //     int i, j;
    //     //     if(d <= 0){
    //     //         i = -d; j = 0;
    //     //     } else {
    //     //         i = 0; j = d;
    //     //     }

    //     //     int min_val = INT_MAX;
    //     //     while(i < n && j < n){
    //     //         min_val = min(min_val, mat[i][j]);
    //     //         i++;
    //     //         j++;
    //     //     }

    //     //     if(min_val < 0) moves += -min_val;
    //     // }

    //     // cout << moves << endl;

    //     for (int d = -(n - 1); d <= n - 1; d++) {
    //     int i = max(0, -d);
    //     int j = max(0, d);
    //     while (i < n && j < n) {
    //         cout << mat[i][j] << " ";
    //         i++;
    //         j++;
    //     }
    //     cout << endl;
    //     }

        int n = 3;
vector<vector<int>> mat = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

for (int d = -(n - 1); d <= n - 1; d++) {
    int i = max(0, -d);
    int j = max(0, d);
    cout << "Diagonal d = " << d << ": ";
    while (i < n && j < n) {
        cout << mat[i][j] << " ";
        i++;
        j++;
    }
    cout << endl;
}


    return 0;
}
