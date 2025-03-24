#include <bits/stdc++.h>
using namespace std;

void subsequences(vector<int> &vec, vector<int> & mid, int index, vector<vector<int>> &result){
    if(index>=vec.size()){
        result.emplace_back(mid);
        return;
    }
    // pick
    mid.emplace_back(vec[index]);
    subsequences(vec,mid,index+1,result);
    mid.pop_back();
    // not pick;
    subsequences(vec,mid,index+1,result);
}

int main(){

    int n;
    cin>>n;
    vector<int> vec(n);
    vector<vector<int>> result;
    vector<int> mid;
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    subsequences(vec,mid,0,result);
    for(auto it: result){
        for(auto num:it){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}