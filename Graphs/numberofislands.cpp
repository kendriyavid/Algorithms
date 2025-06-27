#include <bits/stdc++.h>
using namespace std;

void dfs(int ux, int uy, int n,int m, vector<vector<int>> &matrix, vector<pair<int,int>> &movement){
    matrix[ux][uy] = 0;
    for(pair<int,int> move: movement){
        int nx = ux+move.first;
        int ny = uy+move.second;
        if(nx>=0 || nx<m && ny>=0 || ny<n){
            if(matrix[nx][ny]==1){
                dfs(nx,ny,n,m,matrix,movement);
            }
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    vector<pair<int,int>> movement = {{0,1},{1,0},{0,-1},{-1,0}};
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==1){
                dfs(i,j,n,m,matrix,movement);
            }
        }
    }

    cout<<count<<endl;
    
    return 0;
}