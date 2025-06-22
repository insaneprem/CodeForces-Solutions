#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    int n,k;
    cin>>n>>k;

    vector<int> arr(n),cnt(k+1,0),vec;
    for(auto &i:arr) cin>>i;

    for(int i=0;i<n;i++)
        if(i == 0 || arr[i] !=arr[i-1]) vec.push_back(arr[i]);

    for(int i=0;i<vec.size();i++){
        if(i>0 && i<vec.size()-1 && vec[i-1]==vec[i+1]) cnt[vec[i]]+=2;
        else cnt[vec[i]]+=1;
    }

    int maxi=-1;
    int ans=0;
    
    for(int i=1;i<=k;i++){
       if(cnt[i]>maxi){
         maxi=cnt[i];
         ans=i;
       }
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
    
    solve();    
}