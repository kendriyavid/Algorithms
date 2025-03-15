#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    vector<int> vec1(n);
    vector<int> vec2(m);
    for(int i=0;i<n;i++){
        cin>>vec1[i];
    }
    for(int i=0;i<m;i++){
        cin>>vec2[i];
    }
    vector<int> result(m);
    int j=0;
    for(int i=0;i<m;i++){
        // increase6
        while(j<n && vec1[j]<vec2[i]){
            j++;
        }
        result[i] = j;
    }    
    for(int i=0;i<m;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}