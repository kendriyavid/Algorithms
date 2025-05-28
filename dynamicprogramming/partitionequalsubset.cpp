#include <bits/stdc++.h>
using namespace std;

bool partitionsubset(int i, vector<vector<int>> &dp, int sum, vector<int> &vec, int curr, int n){
    if(curr>sum || i>n){
        return false;
    }
    if(curr==sum){
        return true;
    }

    if(dp[sum][i-1]!=-1){
        return dp[sum][i-1];
    }
    bool notchoose = partitionsubset(i+1,dp,sum,vec,curr,n);
    bool choose = false;
    if(sum<=curr+vec[i-1]){
        choose = partitionsubset(i+1,dp,sum+vec[i-1],vec,curr,n);
    }
    dp[sum][i-1] = choose || notchoose;
    return dp[sum][i-1];
    return -
}

int main(){

    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=vec[i];
    }
    if(sum%2!=0){
        cout<<false;
        return 0;
    }
    vector<vector<int>> dp(sum/2+1, vector<int>(n + 1, -1));
    cout<<partitionsubset(1,dp,sum/2,vec,0,n);

    return 0;
}