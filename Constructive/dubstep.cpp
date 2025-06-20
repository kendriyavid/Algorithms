#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string result="";
    int i=0;
    bool prev = false;
    if(s.length()<3){
        cout<<s<<endl;
        return 0;
    }
    while(i<s.length()-3+1){
        if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B'){
            i+=2;
            if(prev){
                result+=" ";
                prev = false;
            }
        }else{
            result+=s[i];
            prev = true;
        }
        i++;
    }
    while(i<s.length()){
        result+=s[i];
        i++;
    }
    cout<<result<<endl;
    return 0;
}