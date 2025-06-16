#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l = s.length();
        if(l==2 && s[0]=='u' && s[1]=='s'){
            cout<<'i'<<endl;
        }else{
            cout<<s.substr(0,l-2)+"i"<<endl;
        }
    }
}