// // #include <bits/stdc++.h>
// // using namespace std;

// // int houserobber(vector<int> &vec, int i, int previous){
// //     if (i >= 2 * vec.size()) return 0;  // Base case: Prevent infinite recursion
// //     int maximum = INT_MIN;
// //     for(int j = i;j<2*vec.size();j++){
// //         int converted  = j%vec.size();
// //         if(converted-1!=previous || converted+1!=previous){
// //             maximum = max(maximum,vec[converted]+houserobber(vec,j+2,converted));
// //         }
// //     }
// //     return maximum;
// // }

// // int main(){

// //     int n;
// //     cin>>n;
// //     vector<int> vec(n);
// //     for(int i=0;i<n;i++){
// //         cin>>vec[i];
// //     }
// //     cout<<houserobber(vec,0,-2);
// //     return 0;
// // }


// #include <bits/stdc++.h>
// using namespace std;

// int houserobber(vector<int> &vec, int i, int previous, vector<int> &dp) {
//     if (i >= 2 * vec.size()) return 0;  // Base case: Prevent infinite recursion

//     int maximum = INT_MIN;
//     for (int j = i; j < 2 * vec.size(); j++) {
//         int converted = j % vec.size(); // Circular indexing

//         // Corrected condition: Avoid adjacent houses
//         if (converted != previous - 1 && converted != previous + 1) {
//             maximum = max(maximum, vec[converted] + houserobber(vec, j + 2, converted, dp));
//         }
//     }
//     return maximum;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> vec(n);
//     for (int i = 0; i < n; i++) {
//         cin >> vec[i];
//     }

//     vector<int> dp(n, -1);
//     cout << houserobber(vec, 0, -2, dp);  // Start from index 0, no previous house robbed
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int houserobber(vector<int> &vec, int i, int previous) {
    int maximum = INT_MIN;

    for (int j = i; j < vec.size(); j++) {  // No need for 2*vec.size()
        if (j != previous - 1 && j != previous + 1) {  // Ensuring no adjacent houses
            maximum = max(maximum, vec[j] + houserobber(vec, j + 2, j));
        }
    }
    
    return (maximum == INT_MIN) ? 0 : maximum;  // If no valid house, return 0
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    cout << houserobber(vec, 0, -2);  // Start from 0, no previous house robbed
    return 0;
}
