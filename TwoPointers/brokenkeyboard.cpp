#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count=1;
        string result="";
        unordered_set<char> set;
        for(int i=0;i<s.size();i++){
            int count=1;
            while(i<s.size()-1 && s[i]==s[i+1]){
                count++;
                i++;
            }
            if(count%2!=0){
                if(set.find(s[i])==set.end()){
                    result+=s[i];
                    set.insert(s[i]);
                }
            }
        }
        sort(result.begin(),result.end());
        cout<<result<<endl;
    }
}