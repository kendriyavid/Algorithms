#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        bool same = true;

        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                same = false;
                break;
            }
        }

        reverse(a.begin(),a.end());
        bool reverse = true;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                reverse = false;
                break;
            }
        }

        if(same||reverse){
            cout<<"Bob"<<endl;
        }else{
            cout<<"Alice"<<endl;
        }
    }
    return 0;
}