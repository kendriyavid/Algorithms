#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    long long target;
    cin>>n>>target;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    // prefixing
    vector<int> prefix(n+1);
    for(int i=1;i<=n;i++){
        prefix[i] = prefix[i-1]+vec[i-1];
    }

    int minl = INT_MAX;
    int j=0;
    for(int i=1;i<=n;i++){
        while(prefix[i]-prefix[j]>=target){
            minl = min(minl,i-j);
            j++;
        }
    }
    if(minl==INT_MAX){
        cout<<-1;
    }else{
        cout<<minl;
    }
    return 0;
}