#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    vector<int> h(n);
    vector<int> g(n);
    vector<int> j(n);

    for(int i=0;i<n;i++){
        if(i>0){
            h[i] = h[i-1];
            g[i] = g[i-1];
            j[i] = j[i-1];
        }
        if(vec[i]==1){
            h[i]++;
        }else if(vec[i]==2){
            g[i]++;
        }else{
            j[i]++;
        }
    }

    while(q--){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        int holstines = h[r];
        int gursen = g[r];
        int jeresy = j[r];
        if(l>0){
            holstines-=h[l-1];
            gursen -= g[l-1];
            jeresy -= j[l-1];
        }
        cout<<holstines<<" "<<gursen<<" "<<jeresy<<endl;

    }

    return 0;
}