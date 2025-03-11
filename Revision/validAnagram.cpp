#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    cout<<s1<<endl;
    cout<<s2<<endl;
    if(s1!=s2){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
    return 0;
}