#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
    int n;
    cin>>n;

    if(n%2 == 0) cout<<n/2<<" "<<n/2;
    else{
        int last=1;
        for(int i=2;i*i<=n;i++){
            if(n%i == 0){
                last=n/i;
                break;
            }
        }
        cout<<last<<" "<<n-last;
    }

    cout<<"\n";
}
signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    // t=1;
    while(t--) solve();
}