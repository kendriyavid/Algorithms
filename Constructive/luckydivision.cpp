#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> lucky_numbers;

    for (int len = 1; len <= 3; len++) {
        for (int mask = 0; mask < (1 << len); mask++) {
            string num = "";
            for (int i = len - 1; i >= 0; i--) {
                if ((mask >> i) & 1)
                    num += '7';
                else
                    num += '4';
            }
            lucky_numbers.push_back(atoi(num.c_str()));
        }
    }

    int n;
    cin>>n;
    for(int x:lucky_numbers){
        if(n%x==0){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
