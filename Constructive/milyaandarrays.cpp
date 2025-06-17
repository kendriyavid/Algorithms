#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v1(n);
        vector<int> v2(n);
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        for(int i=0;i<n;i++){
            cin>>v2[i];
        }

        // set creation
        unordered_set<int> s1;
        unordered_set<int> s2;

        for(int x:v1){
            s1.insert(x);
        }

        for(int x:v2){
            s2.insert(x);
        }

        if(s1.size()+s2.size()>=4){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}