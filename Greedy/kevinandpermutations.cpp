#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int count = n/k;
        int j = count+1;
        int l = 1;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            if((i+1)%k==0){
                vec[i] = l;
                l++;
            }else{
                vec[i] = j;
                j++;
            }
        }
        for(int x:vec){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}