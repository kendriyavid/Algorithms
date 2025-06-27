#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    bool flag = false;
    for(char c:s){
        if(c=='H' || c=='Q'){
            flag = true;
            break;
        }else if(c=='9'){
                flag = true;
                break;
        }
    }

    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}