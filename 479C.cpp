#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
    int n;
    cin>>n;

    vector<pair<int,int>> arr(n);
    for(auto &i:arr) cin>>i.first>>i.second;
    
    sort(arr.begin(),arr.end());
    int prev=0;
    for(auto i:arr) prev=((i.second>=prev) ? i.second : i.first);
        
    cout<<prev;
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