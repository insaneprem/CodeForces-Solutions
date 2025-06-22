#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
   int n,m;
   cin>>n>>m;

   vector<int> arr(n),brr(m);
   for(auto &i:arr) cin>>i;
   for(auto &i:brr) cin>>i;
   
   sort(arr.begin(),arr.end());
   sort(brr.begin(),brr.end());
   vector<int> prefixA(n),prefixB(m);
   partial_sum(arr.begin(),arr.end(),prefixA.begin());
   partial_sum(brr.begin(),brr.end(),prefixB.begin());
   
    int ans=LLONG_MAX>>1;
    for (int x : arr) {
        int idxA = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
        int left = 0;
        if (idxA > 0) left = idxA * x - prefixA[idxA - 1];
        
        int idxB = upper_bound(brr.begin(), brr.end(), x) - brr.begin();
        int right = 0;
        if (idxB < m) right = (prefixB[m - 1] - (idxB == 0 ? 0 : prefixB[idxB - 1])) - (m - idxB) * x;
        
        ans = min(ans, left + right);
    }

    for (int x : brr) {
        int idxA = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
        int left = 0;
        if (idxA > 0) left = idxA * x - prefixA[idxA - 1];
        
        int idxB = upper_bound(brr.begin(), brr.end(), x) - brr.begin();
        int right = 0;
        if (idxB < m) right = (prefixB[m - 1] - (idxB == 0 ? 0 : prefixB[idxB - 1])) - (m - idxB) * x;
        
        ans = min(ans, left + right);
    }

   cout<<ans;
}
signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
    // cin>>t;
    while(t--) {
        solve();
        cout<<"\n";
    }
}