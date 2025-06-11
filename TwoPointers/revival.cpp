#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }

        int countz=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(vec[i]==1){
                countz=0;
                continue;
            }else{
                if(countz==m){
                    i+=k-1;
                    count++;
                    countz=0;
                }
                countz++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}