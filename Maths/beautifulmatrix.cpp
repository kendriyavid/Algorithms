#include <bits/stdc++.h>
using namespace std;

int main(){
    int matrix[5][5];
    int row1 = -1, col1 = -1; // Position of the '1'
    
    // Read the 5x5 matrix and find position of '1'
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                row1 = i;
                col1 = j;
            }
        }
    }
    
    // Center is at position (2, 2) in 0-indexed
    int centerRow = 2, centerCol = 2;
    
    // Calculate Manhattan distance
    int moves = abs(row1 - centerRow) + abs(col1 - centerCol);
    
    cout << moves << endl;
    
    return 0;
}