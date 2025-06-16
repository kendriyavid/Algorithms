#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    string filtered="";
    char prev='-';
    for(char x:s){
        if(prev!=x){
            filtered+=x;
        }
        prev = x;
    }
    cout<<"filtered: "<<filtered<<endl;
    bool found=false;
    for(int i=0;i<filtered.length()-5+1;i++){
        if(filtered.substr(i,5)=="hello"){
            found=true;
            cout<<i<<endl;
        }
    }

    if(found){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }

    return 0;
}