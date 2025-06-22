#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    int n;
    cin >> n;
    unordered_set<int> present;
    vector<pair<int, int>> seg;
    int start = 1;
    int ans = 0;

    for(int i = 1; i <= n; i++){
        int val;
        cin >> val;
        if(present.count(val)){
            seg.push_back({start, i});
            start = i + 1;
            present.clear();
            ans++;
        }
        else present.insert(val);
    }
    
    if(ans == 0) cout << -1;
    else {
    seg[seg.size()-1].second=n;
        cout << ans << "\n";
        for(auto& i : seg){
            cout << i.first << " " << i.second << "\n";
        }
    }
}

signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
}