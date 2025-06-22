#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> arr(n,0);

    for(auto &i:arr) cin>>i;

    queue<int> q;
    int ans=0;
    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++){
        while(!q.empty() && arr[i]-q.front()>=m) q.pop();
        if(q.size()>=k-1) ans++;
        else q.push(arr[i]);
    }

    cout<<ans<<" ";
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