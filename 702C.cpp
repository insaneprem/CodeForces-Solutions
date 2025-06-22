#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve1(){
    int n,m;
    cin>>n>>m;

    vector<int> cities(n),towers(m);
    for(auto &i:cities) cin>>i;
    for(auto &i:towers) cin>>i;

    int ans=0;
    for(int i=0,j=0;i<n;i++){
         while(j+1<m){
            int dist1=abs(cities[i]-towers[j]);
            int dist2=abs(cities[i]-towers[j+1]);


            if(dist1>=dist2) j++;
            else break;
         }
         ans=max(ans,abs(cities[i]-towers[j]));
    }

    cout<<ans<<"\n";
}
void solve(){
   int n,m;
   cin>>n>>m;

   vector<int> cities(n);
   for(auto &i:cities) cin>>i;

   set<int> towers;
   for(int i=0;i<m;i++){
      int val; cin>>val;

      towers.insert(val);
   }

   towers.insert(-1e17);
   towers.insert(1e17);

   int ans=0;
   for(auto i:cities){
       auto righttower=towers.upper_bound(i);
       auto lefttower=righttower;
       lefttower--;
       
       int res=min(i-*lefttower,*righttower-i);
       ans=max(res,ans);
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
    while(t--) solve1();
} 