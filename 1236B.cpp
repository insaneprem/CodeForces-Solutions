#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
const int mod=1000000007;
int mod_mul(int a,int b,int m){
    return (a % m * b %m ) %m;
}
int mod_exp(int a,int b,int m){
    if(b == 0) return 1;
    int res=mod_exp(a,b/2,m);
    res=mod_mul(res,res,m);
    
    if(b%2 == 1) res=mod_mul(res,a,m);

    return res;
}

void solve(){
   int n,m;
   cin>>n>>m;
   int res=(mod_exp(2,m,mod)-1)%mod;
   res=(mod_exp(res,n,mod))%mod;

   cout<<res;
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