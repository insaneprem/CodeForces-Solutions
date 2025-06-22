#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
    string str;
    cin>>str;
   
    vector<int> ab,ba;
    for(int i=0;i<str.size()-1;i++){
        string a=str.substr(i,2);
        if(a == "AB" ) ab.push_back(i);
        else if(a == "BA" ) ba.push_back(i);
    }
     
    if((ab.size()>0 && ba.size()>0) && (abs(ab[0]-ba[ba.size()-1]) != 1 ||  abs(ba[0]-ab[ab.size()-1]) != 1 )  ) cout<<"YES";
    else cout<<"NO";
   
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