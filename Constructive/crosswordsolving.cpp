#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;

    int minimum = INT_MAX;
    string gstring="";
    for(int i=0;i<m-n+1;i++){
        int count=0;
        string change ="";
        for(int j=0;j<n;j++){
            cout<<s1[i]<<" "<<s2[j]<<endl;
            if(s1[i]!=s2[j+i]){
                count++;
                change+=i;
            }
        }
        if(count<minimum){
            minimum = count;
            gstring = change;
        }
    }

    cout<<minimum<<endl;
    cout<<gstring<<endl;
    return 0;
}