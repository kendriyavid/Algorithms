// print name n times using the recursion

// #include <bits/stdc++.h>
// using namespace std;

// void printNtimes(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<endl;
//     printNtimes(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     printNtimes(n);
//     return 0;
// }


// summation of the first n numbers

// #include <bits/stdc++.h>
// using namespace std;

// int sumfunc(int n){
//     if (n<=0){
//         return 0; 
//     }
//     return n + sumfunc(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<sumfunc(n);
//     return 0;

// }


// reverse an array
// #include <bits/stdc++.h>
// using namespace std;

// void reversearray(vector<int> &vec, int i, int n){
//     if(i<0){
//         return;
//     }
//     reversearray(vec,i-1,n);
//     int temp = vec[i];
//     vec[i] = vec[n-i-1];
//     vec[n-i-1] = temp;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> vec(n);
//     for(int i=0;i<n;i++){
//         cin>>vec[i];
//     }
//     reversearray(vec, n/2, n);   
//     for(int i=0;i<n;i++){
//         cout<<vec[i]<<" ";
//     }
//     return 0;
// }


// check if the string is palindrome

// #include <bits/stdc++.h>
// using namespace std;

// int fibb(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fibb(n-1)+fibb(n-2);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<fibb(n);
//     return 0;
// }
