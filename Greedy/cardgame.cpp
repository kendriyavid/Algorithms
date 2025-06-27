#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }

        char top = vec[n-1];
        char stop = vec[n-2];
        char bottom = vec[0];
        char winner = '-';
        if(top==bottom){
            winner= 'A';
        }else if(top==stop){
            winner = 'A';
        }else{
            winner = 'B';
        }

        if(winner=='A'){
            cout<<"Alice"<<endl;
        }else{
            cout<<"Bob"<<endl;
        }
    }
    return 0;
}