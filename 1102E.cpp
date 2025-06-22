#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
const int mod=998244353;
int power(int base,int x){
    if(x == 0) return 1;

    if(x%1 == 0) return (base*power(base,x-1)%mod)%mod;

    return (power(base,x/2)%mod*power(base,x/2)%mod)%mod;
}
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    map<int,int> lastind;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        lastind[arr[i]]=i;
    }
    
    int max_ind=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        max_ind=max(lastind[arr[i]],max_ind);

        if(max_ind == i) cnt++;
    }

    cout<<power(2,cnt-1)<<"\n";



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