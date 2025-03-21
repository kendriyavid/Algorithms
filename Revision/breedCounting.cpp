#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    vector<int> holstines(n+1);
    vector<int> gurseyns(n+1);
    vector<int> jeresy(n+1);

    for(int i=1;i<=n;i++){
        if(vec[i]==1){
            holstines[i] = holstines[i-1]+1;
            gurseyns[i] = gurseyns[i-1];
            jeresy[i] = jeresy[i-1];
        }else if(vec[i]==2){
            holstines[i] = holstines[i-1];
            gurseyns[i] = gurseyns[i-1]+1;
            jeresy[i] = jeresy[i-1];
        }else{
            holstines[i] = holstines[i-1];
            gurseyns[i] = gurseyns[i-1];
            jeresy[i] = jeresy[i-1]+1;
        }
    }
    // queries
    while(q--){
        int l,r;
        cin>>l>>r;
        int h = holstines[r+1]-holstines[l];
        int g = gurseyns[r+1]-gurseyns[l];
        int j = jeresy[r+1]-jeresy[l];
        cout<<h<<" "<<g<<" "<<j<<endl;
    }
    return 0;
}