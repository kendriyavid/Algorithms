#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    int kscore = vec[k-1];
    int count=0;
    for(int x:vec){
        if(x>0 && x>=kscore){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}