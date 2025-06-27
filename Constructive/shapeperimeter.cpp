#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<pair<int,int>> vec(n);
        for(int i = 0; i < n; i++){
            cin >> vec[i].first >> vec[i].second;
        }

        int perimeter = 0;
        int px = 0, py = 0;
        int sqp = 4 * m;

        for(int i = 0; i < n; i++){
            perimeter += sqp;
            if(i > 0){
                int dx = abs(vec[i].first - px);
                int dy = abs(vec[i].second - py);  // Fixed here
                perimeter -= 2 * (dx + dy);
            }
            px = vec[i].first+m;
            py = vec[i].second+m;
        }

        cout << perimeter << endl;
    }
    return 0;
}
