#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> result(n);
        int low = 1, high = n;
        int i = 0, j = n - 1;
        bool flag = true;

        while (i <= j) {
            if (flag) {
                result[i++] = low++;
                if (i <= j) result[j--] = low++;
            } else {
                result[i++] = high--;
                if (i <= j) result[j--] = high--;
            }
            flag = !flag;
        }

        for (int x : result) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
