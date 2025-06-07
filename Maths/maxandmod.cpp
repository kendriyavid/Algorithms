//https://codeforces.com/problemset/problem/2084/A

#include <bits/stdc++.h>
using namespace std;

int main(){

    int cases;
    cin>>cases;
    while(cases--){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<-1<<endl;
            continue;
        }
        vector<int> vec(n);
        for(int i=1;i<n;i++){
            vec[i] = i;
        }
        vec[0] = n;

        for(int &x:vec){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}