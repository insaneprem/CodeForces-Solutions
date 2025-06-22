#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(b*log10(a) > d*log10(c)) cout<<"YES";
    else cout<<"NO";
}
signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    // cin>>t;
    t=1;
    while(t--) solve();
}