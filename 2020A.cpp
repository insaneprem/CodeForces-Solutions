#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
   int n,k;
   cin>>n>>k;
   
   int ans=0;
   if(n<k || k == 1){
    cout<<n;
    return;
   }
   while(n){
      ans+=n%k;
      n/=k;
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
    cin>>t;
    while(t--) {
        solve();
        cout<<"\n";
    }
}