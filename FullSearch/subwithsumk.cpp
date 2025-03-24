#include <bits/stdc++.h>
using namespace std;

bool subwithsumk(vector<int> &vec, vector<vector<int>> &result, int index, int sum, int k, vector<int> &mid){
    if(sum == k){
        result.emplace_back(mid);
        return true;
    }
    if(sum > k || index >= vec.size()){
        return false;
    }
    
    // Not pick the current element
    bool left = subwithsumk(vec, result, index + 1, sum, k, mid);
    
    // Pick the current element
    bool right = false;
    if(!left){
        mid.emplace_back(vec[index]);
        right = subwithsumk(vec, result, index + 1, sum + vec[index], k, mid);
        mid.pop_back(); // Backtrack
    }

    return right | left;
    
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    
    vector<vector<int>> result;
    vector<int> mid;
    
    subwithsumk(vec, result, 0, 0, k, mid);
    
    for(auto &v : result){
        for(int val : v){
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
