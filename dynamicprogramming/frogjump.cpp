#include <bits/stdc++.h>
using namespace std;

int fjump(int curr, int n, vector<int> &height, vector<int> &dp){
    if(curr>n){
        return INT_MAX;
    }
    if(curr==n){
        return 0;
    }

    // coversiono from 1 to 0
    if(dp[curr]!=-1){
        return dp[curr];
    }
    // 1 jump
    int left = height[curr+1] - height[curr] + fjump(curr+1,n,height,dp);
    // 2 jump
    int right = INT_MAX;
    if(curr+2<=n){
        right = height[curr+2] - height[curr] + fjump(curr+2,n,height,dp);
    }
    dp[curr] = min(left,right);

    return dp[curr];
}

int main(){
    int n;
    cin>>n;
    vector<int> height(n);
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    vector<int> dp(n+1,-1);
    cout<<fjump(0,n-1,height,dp);
    return 0;
}