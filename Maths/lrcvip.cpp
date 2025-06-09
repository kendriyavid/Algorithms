//https://codeforces.com/problemset/problem/2107/A


#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }

        int max=0;
        for(int i=0;i<n;i++){
            if(vec[max]<vec[i]){
                max = i;
            }
        }
        //check all are same or not
        for(int i=1;i<n;i++){
            if(vec[i]!=vec[i-1]){
                break;
            }
            if(i==n-1){
                cout<<"no"<<endl;;
                continue;
            }
        }

        cout<<"yes"<<endl;
        for(int i=0;i<n;i++){
            if(max==i){
                cout<<2<<" ";
            }else{
                cout<<1<<" ";
            }
        }

        cout<<endl;
        
    }
    return 0;
}