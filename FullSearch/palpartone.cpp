#include <bits/stdc++.h>
using namespace std;

bool ispal(string s){
    int i=0;int j = s.size()-1; 
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void palpart(vector<vector<string>> &result, vector<string> &mid, int index, string s){
    if(index>=s.size()){
        result.emplace_back(mid);
        return;
    }
    for(int i=index;i<s.size();i++){
        string sub = s.substr(index,i - index + 1);
        if(ispal(sub)){
            mid.emplace_back(sub);
            palpart(result,mid,i+1,s);
            mid.pop_back();
        }
    }
}

int main(){

    string s;
    cin>>s;
    vector<vector<string>> result;
    vector<string> mid; 
    palpart(result,mid,0,s);
    for(auto inv: result){
        for(auto i:inv){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}