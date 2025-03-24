#include <bits/stdc++.h>
using namespace std;

struct Point {
    long long x, y, t;
};

// Custom comparator for sorting cows by time
bool compareByTime(const Point &a, const Point &b) {
    return a.t < b.t;
}

// Function to check if a cow can reach grazing
bool canReach(const Point &cow, const Point &graze) {
    return abs(cow.x - graze.x) + abs(cow.y - graze.y) <= abs(cow.t - graze.t);
}

int main() {
    int G, N;
    cin >> G >> N;
    
    vector<Point> grazes(G), cows(N);
    
    // Read grazing incidents
    for (int i = 0; i < G; i++) 
        cin >> grazes[i].x >> grazes[i].y >> grazes[i].t;

    // Read cow alibis
    for (int i = 0; i < N; i++) 
        cin >> cows[i].x >> cows[i].y >> cows[i].t;
    
    // Sort cows based on time
    sort(cows.begin(), cows.end(), compareByTime);

    unordered_set<int> innocentCows;

    // Process each grazing incident
    for (auto graze : grazes) {
        auto it = lower_bound(cows.begin(), cows.end(), graze, compareByTime);
        
        // Check if `it` is a valid cow and can reach
        if (it != cows.end() && canReach(*it, graze)) 
            innocentCows.insert(it - cows.begin());
    }

    // Output the number of innocent cows
    cout << innocentCows.size() << endl;
    return 0;
}
