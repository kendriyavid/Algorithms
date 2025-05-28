#include <bits/stdc++.h>
using namespace std;

string lcs(int i, int j, string s1, string s2, vector<vector<string>> &dp){
    if(i>s1.size() || j>s2.size()){
        return "";
    }
    if(dp[i+1][j+1]!=""){
        return dp[i+1][j+1];
    }
    if(s1[i]==s2[j]){
        return s1[i]+lcs(i++,j++,s1,s2,dp);
    }else{
        string left = s1[i]+lcs(i++,j,s1,s2,dp);
        string right = s2[j]+lcs(i,j++,s1,s2,dp);
        if(left.size()>right.size()){
            dp[i+1][j+1] = left;
            return dp[i+1][j+1];
        }else{
            dp[i+1][j+1] = right;
            return dp[i+1][j+1];
        }
    }

}

int main(){
    return 0;
}