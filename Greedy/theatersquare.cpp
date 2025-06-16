#include <bits/stdc++.h>
using namespace std;

int main(){ 

    int n,m,a;
    cin>>n>>m>>a;
    long long l = ceil(1.0*n/a);
    long long b = ceil(1.0*m/a);
    cout<<l<<" "<<b<<endl;
    cout<<l*b<<endl;
    return 0;
}