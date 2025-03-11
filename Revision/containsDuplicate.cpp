#include <bits/stdc++.h>
using namespace std;

bool checkDuplicate(int n,vector <int> &arr){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        if(mp.find(arr[i])!=mp.end()){
            return false;
        }
        mp[arr[i]]++;
    }
    return true;
}

int main(){
    int n;
    cin>>n ;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<checkDuplicate(n,arr);
    return 0;
}