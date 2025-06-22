#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    int n,m,k;
    cin>>n>>m>>k;

    vector<int> arr(m+1,1e9);

    for(int i=0;i<n;i++){
        int num,val;
        cin>>num>>val;

        arr[num]=min(arr[num],val);
    }

    int ans=0;
    for(int i=1;i<=m;i++) ans+=arr[i];

    cout<<min(k,ans)<<"\n";

}
signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    solve();
    
}