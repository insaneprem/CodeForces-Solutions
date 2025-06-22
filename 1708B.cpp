#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
    int n,l,r;
    cin>>n>>l>>r;

    vector<int> arr(n+1);
    bool flag=1;
    for(int i=1;i<=n;i++){
        int val=(r/i)*i;
        if(val<l || val>r){flag= 0; break;}
        arr[i]=val;
    }

    if(!flag) cout<<"NO";
    else{
        cout<<"YES"<<"\n";
       for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
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