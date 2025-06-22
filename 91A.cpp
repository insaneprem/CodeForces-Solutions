#include <bits/stdc++.h>
using namespace std;
#define long long int;
void solve(){
    string s,t;
    cin>>s>>t;

    int n=s.size(),m=t.size();

    set<int> pos[26];
    for(int i=0;i<n;i++) pos[s[i]-'a'].insert(i);

    int ans=1, lastindex=-1;

    for(int i=0;i<m;i++){
        int ch=t[i]-'a';
        if(pos[ch].size() == 0){
            cout<<"-1\n";
            return ;
        }
        auto it=pos[ch].upper_bound(lastindex);

        if(it == pos[ch].end()) ans++,lastindex=*pos[ch].begin();
        else lastindex=*it;
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