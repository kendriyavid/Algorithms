#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    int count=0;
    bool flag = false;
    for(char c:s){
        if(c=='H' || c=='Q'){
            flag = true;
            count=0;
            break;
        }else if(c=='9'){
            count++;
            if(count==2){
                flag = true;
                break;
            }
        }else{
            count=0;
        }
    }

    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}