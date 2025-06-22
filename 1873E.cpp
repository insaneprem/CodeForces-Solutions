#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
int n,x;
bool pred(vector<int> &arr,int x,int h){
   for(auto i:arr) if(i<h) x-=(h-i);
   return x>=0;
}

void solve(){
     cin>>n>>x;

     vector<int> arr(n);
     for(auto &i:arr) cin>>i;

     int l=0,r=1e10;

     while(r-l>1){
        int mid=(l+r)>>1;
        (pred(arr,x,mid)) ? l=mid : r=mid;
     }
     
     cout<<l<<"\n";
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