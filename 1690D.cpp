#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
int count(string str,int k){

    int l=0, r , n=str.size() , wcnt=0 , ans=1e9;

    for(r=0;r<k;r++) if(str[r] == 'W') wcnt++;

    ans=min(wcnt,ans);

    while (r < n) {
        if (str[l] == 'W') wcnt--;
        l++;
        if (r < n && str[r] == 'W') wcnt++;
        r++;
        if (r - l == k)  ans = min(ans, wcnt);
    }
    return ans;
}
void solve(){
   int n,k;
   cin>>n>>k;
   string str;
   cin>>str;
   
   cout<<count(str,k)<<"\n";

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