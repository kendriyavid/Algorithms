#include <bits/stdc++.h>
using namespace std;

int main(){

    int m,n;
    cin>>m>>n;
    int count=0;
    count+= (m/2)*n;
    if(m%2!=0){
        count+=(n/2);
    }
    cout<<count<<endl;
    return 0;
}