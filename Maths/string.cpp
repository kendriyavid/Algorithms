#include <bits/stdc++.h>
using namespace std;

int main(){

    int cases;
    cin>> cases;
    while(cases--){
        string s;
        cin>>s;
        int count = 0;
        for(char x: s){
            if(x=='1'){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}