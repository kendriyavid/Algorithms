#include <bits/stdc++.h>
using namespace std;

int main(){

    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s2.size();i++){
        int chars1 = int(s1[i]);
        int chars2 = int(s2[i]);
        if(chars1>90){
            chars1-=32;
        }
        if(chars2>90){
            chars2-=32;
        }
        if(chars1>chars2){
            cout<<1<<endl;
            return 0;
        }else if(chars1<chars2){
            cout<<-1<<endl;
            return 0;
        }
    }

    cout<<0<<endl;

    return 0;
}