#include <bits/stdc++.h>
using namespace std;

char lowercase(char c){
    int nchar = int(c);
    if(nchar<=90){
        return char(nchar+32);
    }
    return c;
}

int main(){
    string s;
    cin>>s;
    string result = "";
    set<char> vowels; 
    vowels.insert('a');
    vowels.insert('e');
    vowels.insert('i');
    vowels.insert('o');
    vowels.insert('u');

    for(char x:s){
        char lower = lowercase(x);
        if(vowels.find(lower)==vowels.end()){
            result = result+'.'+lower;
        }
    }
    cout<<result<<endl;
    return 0;
}