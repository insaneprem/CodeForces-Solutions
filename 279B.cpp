#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double

bool check(vector<int> &arr,int len,int time){
   int t=0,l=0,r=0;
   for(r;r<len;r++) t+=arr[r];

   if(t<=time) return true;

   for(l,r;r<arr.size();l++,r++){
      t=t-arr[l]+arr[r];

      if(t<=time) return true;
   }

   return false;
}
void solve(){
   int n,t;
   cin>>n>>t;

   vector<int> arr(n);
   for(auto &i:arr) cin>>i;

   int l=-1,r=arr.size()+1;

   while(r-l>1){
      int mid=(l+r)/2;
      check(arr,mid,t) ? l=mid : r=mid;
   }

   cout<<l;
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