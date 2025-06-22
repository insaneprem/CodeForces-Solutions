#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for(auto &i: arr) cin >> i;
    
    sort(arr.begin(), arr.end(), greater<int>());
    
    int ans = 0, cnt = 0;
    for (int i = 0; i < n; i++){
        cnt++; 
        if(arr[i] * cnt >= x){
            ans++;
            cnt = 0; 
        }
    }
    
    cout << ans;
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