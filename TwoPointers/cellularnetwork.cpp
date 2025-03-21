#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> cities(n);
    vector<int> towers(m);

    for(int i = 0; i < n; i++) cin >> cities[i];
    for(int i = 0; i < m; i++) cin >> towers[i];

    int result = INT_MIN;
    int j = 0;

    for(int i = 0; i < n; i++){
        int cdiff = abs(cities[i] - towers[j]);

        while(j < m - 1 && cdiff > abs(cities[i] - towers[j + 1])){
            j++;
            cdiff = abs(cities[i] - towers[j]);
        }

        result = max(result, cdiff);
    }

    cout << result << endl;
    return 0;
}
