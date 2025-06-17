#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int currstreak = 1;
    for(int i=1;i<s.size();i++){
        if(s[i-1]!=s[i]){
            currstreak = 1;
        }else{
            currstreak++;
            if(currstreak>=7){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}