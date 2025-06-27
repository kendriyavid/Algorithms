#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> result(n);
        if(k%2==0){
            for(int i=0;i<n;i++){
                result[i] = n-1;
            }
            result[n-2] = n;
        }else{
            for(int i=0;i<n;i++){
                result[i] = n;
            }
            result[n-2] = n-1;
        }
        for(int x:result){
            cout<<x<<" ";
        }
        cout<<endl;
    }


    return 0;
}