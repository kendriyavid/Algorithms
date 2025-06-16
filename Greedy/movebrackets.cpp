#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int op=0;
        int cl=0;
        for(char curr: s){
            if(op>0 && curr==')'){
                op--;
            }else if(curr==')'){
                cl++;
            }else{
                op++;
            }
        }
        cout<<cl<<endl;
    }
    return 0;
}