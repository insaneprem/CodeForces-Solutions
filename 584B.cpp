#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
const int mod=1000000007;
int power(int base,int x){
    if(x == 0) return 1;

    if(x%2 == 1) return (base*power(base,x-1)%mod)%mod;

    return (power(base,x/2)%mod*power(base,x/2)%mod)%mod;
}
void solve(){
    int n;
    cin>>n;

    cout<<(power(3,3*n)-power(7,n)+mod)%mod;
}
signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi
    // Tu har lamha tha mujhse juda...Chaiye dur tha meh

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