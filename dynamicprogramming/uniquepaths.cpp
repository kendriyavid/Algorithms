#include <bits/stdc++.h>
using namespace std;

// m - x
// n - y
int uniquepaths(int i,int j, vector<vector<int>> &dp,int n, int m){
    if(i>=m || j>=n){
        return 0;
    }
    if(i==m-1 && j==n-1){
        return 1;
    }
    if(dp[j][i]!=-1){
        return dp[j][i];
    }
    // right
    int right = uniquepaths(i+1,j,dp,n,m);
    int left = uniquepaths(i,j+1,dp,n,m);
    dp[j][i] = left+right;
    return dp[j][i];
}

int main(){
    int n,m;
    cin>>m>>n;
    vector<vector<int>> mat(n,vector<int>(m));

    return 0;
}