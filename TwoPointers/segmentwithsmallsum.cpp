#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long target;
    cin >> n >> target;
    vector<long long> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    // prefixing
    vector<long long> prefix(n + 1);
    for(int i = 1; i <= n; i++){
        prefix[i] = vec[i - 1] + prefix[i - 1];
    }

    int j = 0;
    int maxl = 0;
    for(int i = 1; i <= n; i++){ // Fix range to include last element
        while(i > j && prefix[i] - prefix[j] > target){
            j++;
        }
        // measure
        if(prefix[i] - prefix[j] <= target){
            maxl = max(maxl, i - j);
        }
    }
    cout << maxl;
    return 0;
}
