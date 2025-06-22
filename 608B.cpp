#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
    string a,b;
    cin>>a>>b;

    int n=a.size(),m=b.size();

    vector<int> arr(m,0);

    for(int i=0;i<m;i++){
       if(b[i] == '1') arr[i]=1;
    }

    partial_sum(arr.begin(),arr.end(),arr.begin());
    
    int ans=0;
    for(int i=0;i<n;i++){
        int one=arr[m-n+i]-(i>0 ? arr[i-1] : 0);

        if(a[i] == '1') ans+=(m-n+1)-one;
        else ans+=one;
    }

    cout<<ans<<"\n";
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