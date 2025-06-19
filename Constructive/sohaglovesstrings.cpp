/// used set intead of using hashmap for counting.
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool flag = false;
        char prev = '-';
        // unordered_set<char> seti;
        for(int i=0;i<s.length();i++){
            if( i>0 && prev==s[i]){
                cout<< s.substr(i - 1, 2)<<endl;
                flag = true;
                break;
            }
            prev = s[i];

            // seti.insert(s[i]);
            // if(i>2){
            //     seti.erase(s[i-3]);
            // }
            // for(char c:seti){
            //     cout<<c<<" ";
            // }
            // cout<<endl;
            // if(seti.size()==3){
            //     cout<<s.substr(i-3+1,3)<<endl;
            //     flag = true;
            //     break;
            // }

            if (s[i] != s[i - 1] && s[i] != s[i - 2] && s[i - 1] != s[i - 2]) {
                cout << s.substr(i - 2, 3) << endl;
                flag = true;
                break;
            }

        }
        if(!flag){
            cout<<-1<<endl;
        }
    }
    return 0;
}