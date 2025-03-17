#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long p;
    cin >> n >> p;
    vector<long long> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    
    long long total_sum = accumulate(vec.begin(), vec.end(), 0LL);
        
    long long full_rotations = 0;
    if (p > total_sum) {
        full_rotations = p / total_sum;
        p -= full_rotations * total_sum;
    }
    long long total_songs = full_rotations * n;

    if(p<=0){
        cout<<0+1<<" "<<total_songs;
        return 0;
    }
    
    int min_length = n; // this will be the max needed as we have removed the wraparounds
    int start_idx = 0;

    long long curr_sum = 0;
    int left = 0;
    
    for (int right = 0; right < 2 * n; right++) {
        int rr = right%n;
        curr_sum += vec[rr];
        
        while (left <= right && curr_sum >= p) {
            int ll = left%n;
            if (right - left + 1 < min_length) {
                min_length = right - left + 1;
                start_idx = ll;
            }
            curr_sum -= vec[ll];
            left++;
        }
    }
    
    total_songs += min_length;
    
    cout << start_idx+1 << " " << total_songs << endl;
    
    return 0;
}
