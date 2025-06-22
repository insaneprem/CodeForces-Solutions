#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    int n;
    cin>>n;
    
    vector<int> sum(1000100,0);
    int cnt=0;

    for(int i=0;i<n;i++){
        int val; cin>>val;
        sum[val]++;
    }


    for(int i=0;i<=1000099;i++){
        sum[i+1]+=sum[i]/2;
        sum[i]=sum[i]%2;
        cnt+=sum[i];
    }

    cout<<cnt<<"\n";
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