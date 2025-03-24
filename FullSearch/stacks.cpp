#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char> stack;
    unordered_map<char,char> mp;
    mp['}']  = '{';
    mp[')'] = '(';
    mp[']'] = '[';
    for(int i=0;i<s.size();i++){
        if(!stack.empty() && mp[stack.top()] == s[i]){
            stack.pop();
        }else{
            stack.push(s[i]);
        }
    }
    if(stack.empty()){
        cout<< true;
    }else{
        cout<< false;
    }

    return 0;
}