#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string  base ="aeiou";
        string result = "";
        for(int i=0;i<n;i++){
            result+=base[i%5];
        }
        sort(result.begin(),result.end());
        cout<<result<<endl;
    }
    return 0;
}