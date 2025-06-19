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
        int upperscore = 0;
        int underscore = 0;
        for(char c:s){
            if(c=='-'){
                upperscore++;
            }else{
                underscore++;
            }
        }
        int before=0;int between=0; int after=0;
        // cout<<upperscore<<" "<<underscore<<endl;
        if(upperscore>=2 && underscore>0){
            before = ceil(upperscore / 2.0);
            between = underscore;
            after = floor(upperscore/2.0);
        }
        // cout<<"before: "<<before<<" after: "<<after<<" between: "<<between<<endl; 
        cout << 1LL * before * between * after << endl;
    }
    return 0;
}