#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    
    long long count = 0;
    unordered_map<int, int> mp;
    int j = 0;
    
    for(int i = 0; i < n; i++){
        mp[vec[i]]++;
        
        while(mp.size() > k){
            mp[vec[j]]--;
            if(mp[vec[j]] == 0){
                mp.erase(vec[j]);
            }
            j++;
        }
        
        count += (i - j + 1);
        
    }
    
    cout << count << endl;
    return 0;
}


// // C++ Code to count the subarrays having at most
// // k distinct elements by exploring all subarrays

// #include <iostream>
// #include <unordered_map>
// #include <vector>
// using namespace std;

// int atMostK(vector<int> &arr, int k) {
//     int n = arr.size();
//     int res = 0;

//     // pointers to mark the left and right boundary
//     int left = 0, right = 0;

//     // Frequency map
//     unordered_map<int, int> freq;
//     while (right < n) {
//         freq[arr[right]] += 1;

//         // If this is a new element in the window,
//         // decrement k by 1
//         if (freq[arr[right]] == 1)
//             k -= 1;

//         // Shrink the window until distinct element
//         // count becomes <= k
//         while (k < 0) {
//             freq[arr[left]] -= 1;
//             if (freq[arr[left]] == 0)
//                 k += 1;
//             left += 1;
//         }

//         // add all possible subarrays to result
//         res += (right - left + 1);
//         right += 1;
//     }
//     return res;
// }

// int main() {
//     vector<int> arr = {2,6,4,3,6,8,3};
//     int k = 3;
//     cout << atMostK(arr, k);
// }
