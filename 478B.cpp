#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
const int mod=1e9+7;
int ncr(int a){
    int val=(a*(a-1))/2;
    return val;
}
void solve(){
    int n,m;
    cin>>n>>m;
    
    int mini=ncr(n/m) * (m - (n%m) ) + ncr( (n/m) + 1) * (n%m);
    int maxi=ncr(n-m+1);

    cout<<mini<<" "<<maxi;
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