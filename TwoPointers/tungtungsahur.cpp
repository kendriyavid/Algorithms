
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string input, outcome;
        cin >> input >> outcome;

        int i = 0, j = 0;
        bool flag = true;

        while(i < input.size() && j < outcome.size()){
            if(input[i] != outcome[j]){
                flag = false;
                break;
            }

            char ch = input[i];
            int counti = 0;
            while(i < input.size() && input[i] == ch){
                counti++;
                i++;
            }

            int countj = 0;
            while(j < outcome.size() && outcome[j] == ch){
                countj++;
                j++;
            }

            if(countj < counti || countj > 2 * counti){
                flag = false;
                break;
            }
        }

        if(i != input.size() || j != outcome.size()) flag = false;

        cout << (flag ? "yes" : "no") << endl;
    }
    return 0;
}
