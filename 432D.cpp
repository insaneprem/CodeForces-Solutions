#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
    string str;
    cin>>str;

    int n=str.size();

    vector<int> pi(n);
    for(int i=1;i<n;i++){
        int j=pi[i-1];
        while(j>0 && str[i] != str[j]) j=pi[j-1];

        if(str[i] == str[j]) j++;
        pi[i]=j;
    }

    vector<int> occurance(n+1);

    for(int i=0;i<n;i++) occurance[pi[i]]++;
    for(int i=n-1;i>0;i--) occurance[pi[i-1]]+=occurance[i];
    for(int i=0;i<=n;i++) occurance[i]++;
    
    vector<int> prefix_suffix;
    prefix_suffix.push_back(n);

    int k=pi[n-1];
    while(k>0){
        prefix_suffix.push_back(k);
        k=pi[k-1];
    }
    sort(begin(prefix_suffix),end(prefix_suffix));
    
    cout<<prefix_suffix.size()<<"\n";

    for(auto i:prefix_suffix) cout<<i<<" "<<occurance[i]<<'\n';

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