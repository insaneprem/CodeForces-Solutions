#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
const int mod=1e9+7;
void solve(){
    int n;
    cin>>n;

    int A=0,B=0,C=0,D=1;

    for(int i=1;i<=n;i++){
        int a=(B+C+D)%mod;
        int b=(A+C+D)%mod;
        int c=(A+B+D)%mod;
        int d=(A+B+C)%mod;

        A=a,B=b,C=c,D=d;
    }

    cout<<D;

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