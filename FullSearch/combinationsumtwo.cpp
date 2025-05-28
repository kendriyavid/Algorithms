#include <bits/stdc++.h>
using namespace std;

void combinationsum(vector<int> &vec, int i, vector<vector<int>> &result, vector<int> &mid, int k, int sum){
    if(sum==k){
        result.emplace_back(mid);
        return;
    }
    
    if(sum>k || i>=vec.size()){
        return;
    }

    while(vec[i]==vec[i+1]){
        i++;
    }

    combinationsum(vec,i+1,result,mid,k,sum);
    mid.emplace_back(vec[i]);
    combinationsum(vec,i+1,result,mid,l,sum+vec[i]);
    mid.pop_back();
}

int main(){

    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    vector<vector<int>> result;
    vector<int> mid;
    
    return 0;
}