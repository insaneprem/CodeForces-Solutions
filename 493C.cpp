#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
pair<int, int> calculate_score(vector<int> &arr, vector<int> &brr, int ind) {
    int a = arr.size();
    int b = brr.size();
    
    auto inda = upper_bound(arr.begin(), arr.end(), ind) - arr.begin();
    auto indb = upper_bound(brr.begin(), brr.end(), ind) - brr.begin();
    
    int scorea = (a * 3) - inda;  
    int scoreb = (b * 3) - indb;  

    return {scorea, scoreb};
}

void solve() {
    int a, b;
    cin >> a;
    vector<int> arr(a);
    for (auto &i : arr) cin >> i;

    cin >> b;
    vector<int> brr(b);
    for (auto &i : brr) cin >> i;

    
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());

    int bestA = 0, bestB = 0, bestDiff = LLONG_MIN;
    
    vector<int> candidates;
    candidates.insert(candidates.end(), arr.begin(), arr.end());
    candidates.insert(candidates.end(), brr.begin(), brr.end());

    
    candidates.push_back(arr[0] - 1); 
    candidates.push_back(brr[0] - 1); 
    candidates.push_back(arr.back() + 1); 
    candidates.push_back(brr.back() + 1);
    
    
    sort(candidates.begin(), candidates.end());
    candidates.erase(unique(candidates.begin(), candidates.end()), candidates.end());

    
    for (auto i : candidates) {
        pair<int, int> scores = calculate_score(arr, brr, i);
        int scoreA = scores.first;
        int scoreB = scores.second;
        int current_diff = scoreA - scoreB;
        
        if (current_diff > bestDiff || (current_diff == bestDiff && scoreA > bestA)) {
            bestDiff = current_diff;
            bestA = scoreA;
            bestB = scoreB;
        }
    }

    cout << bestA << ":" << bestB << "\n";
}

signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    // cin>>t;
    t=1;
    while(t--) solve();
}