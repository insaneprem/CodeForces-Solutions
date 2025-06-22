#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    string str,can_use;
    cin>>str>>can_use;

    vector<int> req(10,0);
    vector<int> freq(10,0);

    for(auto i:str) req[i-'0']++;
    for(auto i:can_use) freq[i-'0']++;

    req[2]+=req[5],req[6]+=req[9],req[5]=0,req[9]=0;
    freq[2]+=freq[5],freq[6]+=freq[9],freq[5]=0,freq[9]=0;

    int ans=1e9;

    for(int i=0;i<10;i++) if(req[i] != 0) ans=min(ans,freq[i]/req[i]);
    
    cout<<ans<<"\n";
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