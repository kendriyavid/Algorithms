// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, target;
//     cin >> n >> target;
//     vector<int> vec(n);
//     for (int i = 0; i < n; i++) {
//         cin >> vec[i];
//     }
    
//     int index = -1;
//     int i = 0, j = n - 1;

//     while (i <= j) {
//         int mid = i + (j - i) / 2; // Avoids overflow in large `i + j`
//         if (vec[mid] == target) {
//             index = mid;
//             break;
//         }
//         if (vec[mid] > target) {
//             j = mid - 1;
//         } else {
//             i = mid + 1;
//         }
//     }

//     if (index == -1) {
//         cout << "notfound";
//     } else {
//         cout << index;
//     }

//     return 0;
// }



// /// first 1 
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int> vec(n);
//     for(int i=0;i<n;i++){
//         cin>>vec[i];
//     }
//     int index = -1;
//     int i=0;
//     int j = n-1;
//     while(i<=j){
//         int mid = (i+j)/2;
//         if(vec[mid]==1){
//             index = mid;
//             j = mid-1;
//         }else{
//             i = mid+1;
//         }
//     }
//     cout<<index;
//     return 0;
// }

// last 1
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int> vec(n);
//     for(int i=0;i<n;i++){
//         cin>>vec[i];
//     }
//     int index=-1;
//     int i=0;
//     int j=n-1;
//     while(i<=j){
//         int mid=(i+j)/2;
//         if(vec[mid]==1){
//             index = mid;
//             i = mid+1;
//         }else
//     }

//     return 0;
// }


// SEARCH IN ROTATED SORTED ARRAY 2
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,k;
//     cin>>n>>k;
//     vector<int> vec(n);
//     for(int i=0;i<n;i++){
//         cin>>vec[i];
//     }
//     int i=0;
//     int j = n-1;
//     while(i<=j){
//         int mid = (i+j)/2;
//         if(vec[mid]==k){
//             cout<<mid;
//             return 0;
//         }
//         if(vec[mid]<=vec[j]){
//             // right sorted
//             if(k>mid && k<=vec[j]){
//                 i = mid+1;
//             }else{
//                 j = mid-1;
//             }
//         }else{
//             // left sorted
//             if(k>=vec[i] && k<vec[mid]){
//                 j = mid-1;
//             }else{
//                 i = mid+1;
//             }
//         }
//     }
//     cout<<-1;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;
//     vector<int> vec(n);
//     for(int i=0;i<n;i++){
//         cin>>vec[i];
//     }
//     int minimum = INT_MAX;
//     int i=0;
//     int j=n-1;
//     while(i<=j){
//         int mid = (i+j)/2;
//         // sorted wale se minimum aur non sorted par check ke liye daal dunga 
//         // sorted wala find karna padega. 
//         // minimum step
//         // non sorted wala step
//         if(vec[mid]>=vec[i]){
//             // left sorted
//             minimum = min(minimum ,vec[i]);
//             i= mid+1;
//         }else{
//             minimum = min(minimum,vec[mid]);
//             j = mid-1;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0;
    int j = 100;
    int result = -1;
    while(i<=j){
        int mid = (i+j)/2;
        cout<<mid<<endl;
        if(mid*mid<=n){
            result = mid;
            i = mid+1;
        }else{
            j = mid-1;
        }
    }
    cout<<result<<endl;
    return 0;
}