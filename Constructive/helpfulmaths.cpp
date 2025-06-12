#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    vector<int> vec;
    for( char c: s){
        if(c=='+'){
            continue;
        }
        int i=0;
        if(c=='1'){
            i=1;
        }else if(c=='2'){
            i=2;
        }else{
            i=3;
        }
        vec.emplace_back(i);
    }

    sort(vec.begin(),vec.end());
    for(int i =0;i<vec.size();i++){
        cout<<vec[i];
        if(i!=vec.size()-1){
            cout<<"+";
        }
    }
    return 0;
}