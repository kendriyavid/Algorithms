#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        
        // Print numbers >= k in descending order
        for (int i = n; i >= k; i--) {
            cout << i << " ";
        }
        
        // Print numbers between m+1 and k-1 (in any order, using ascending)
        for (int i = m + 1; i < k; i++) {
            cout << i << " ";
        }
        
        // Print numbers <= m in ascending order
        for (int i = 1; i <= m; i++) {
            cout << i << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}