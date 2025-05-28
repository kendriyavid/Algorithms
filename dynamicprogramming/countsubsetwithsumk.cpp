#include <bits/stdc++.h>
using namespace std;

void countsubsetwithsumk(vector<vector<int>> &dp, vector<int> &vec, int i,int sum, int curr){
    if(sum>curr || i>n){
        return;
    }
    if(sum==curr){
        return;
    }
    
}

int main(){

    int n,k;
    cin>>n>>k;
    vector<vector<int>> vec(k+1,vector<int>(n+1),-1));
    return 0;
}