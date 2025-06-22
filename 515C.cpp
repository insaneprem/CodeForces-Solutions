#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
    int n;
    cin>>n;

    string str;
    cin>>str;
    
    string ans="";
    for(auto i:str){
        if(i == '1' || i == '0') continue;

        if(i =='4') ans+="322";
        else if(i == '6') ans+="53";
        else if(i == '8') ans+="7222";
        else if(i == '9') ans+="7332";
        else ans+=i;
    }

    sort(ans.begin(),ans.end(),greater<int>());
    cout<<ans;
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