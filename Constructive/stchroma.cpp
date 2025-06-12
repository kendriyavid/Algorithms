#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> vec(n);
        int value=0;
        for(int i=0;i<n-1;i++){
            if(value!=x){
                vec[i] = value;
            }else{
                value++;
                vec[i] = value;
            }
            value++;
        }
        if(n-1!=0){
            vec[n-1] = x;
        }
        if(n==x){
            vec[n-1] = x-1;
        }
        for(int x:vec){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}