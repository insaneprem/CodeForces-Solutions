#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
bool check(vector<int> arr,int median,int op,int n){
    

    for(int i=n/2;i<n;i++){
       int req=median-arr[i];
       if(op <req) return false;
       op-=req;
    }
    return 1;
}
void solve(){
   int n,k;
   cin>>n>>k;

   vector<int> arr(n);
   for(auto &i:arr) cin>>i;
   
   sort(arr.begin(),arr.end());

   int l=arr[n/2]-1,r=2e18;

   while(r-l>1){
    int mid=(l+r)/2;
    (check(arr,mid,k,n)) ? l=mid : r=mid;
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
    // cin>>t;
    t=1;
    while(t--) solve();
}