


#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        char c;
        cin >> n >> c;
        vector<char> vec(n);
        for(int i = 0; i < n; i++){
            cin >> vec[i];
        }

        int maxDist = 0;
        int j=0;
        for(int i = 0; i < n; i++){
            if(vec[i] != c){
                continue;
            }
            
            if(j<i){
                j = i;
            }
            while(vec[j % n] != 'g'){
                j++;
            }
            
            int dist = j - i;
            maxDist = max(maxDist, dist);
        }
        
        cout << maxDist << endl;
    }
    
    return 0;
}