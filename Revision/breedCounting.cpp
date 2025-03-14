#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    
    vector<int> holstines(n + 1, 0);
    vector<int> gurseyns(n + 1, 0);
    vector<int> jeresy(n + 1, 0);
    
    for(int i = 1; i <= n; i++){
        if(vec[i - 1] == 1){
            holstines[i] = holstines[i - 1] + 1;
            gurseyns[i] = gurseyns[i - 1];
            jeresy[i] = jeresy[i - 1];
        } else if(vec[i - 1] == 2){
            holstines[i] = holstines[i - 1];
            gurseyns[i] = gurseyns[i - 1] + 1;
            jeresy[i] = jeresy[i - 1];
        } else {
            holstines[i] = holstines[i - 1];
            gurseyns[i] = gurseyns[i - 1];
            jeresy[i] = jeresy[i - 1] + 1;
        }
    }
    
    // Queries
    while(q--){
        int l, r;
        cin >> l >> r;
        int h = holstines[r] - holstines[l - 1];
        int g = gurseyns[r] - gurseyns[l - 1];
        int j = jeresy[r] - jeresy[l - 1];
        cout << h << " " << g << " " << j << endl;
    }
    
    return 0;
}
