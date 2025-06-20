#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        vec[0]=1;
        int count=1;
        int half = floor(n/2.0);
        for(int i=1;i<n;i++){
            vec[i] = count%half;
            // cout<<count%half;
            if(count%half==0){
                vec[i]=half;
            }
            count++;
        }
        for(int x:vec){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}