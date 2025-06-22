#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    string str;
    cin>>str;
    int n=str.size();

    vector<int> arr(26,0);
    for(auto i:str) arr[i-'A']++;

    int freq=0;
    char ch;
    for(int i=0;i<26;i++){
       if(arr[i]>freq){
        freq=arr[i];
        ch=(i+'A');
       }
    }
    
    char temp;
    if(ch == 'R') temp='P';
    else if(ch == 'P') temp='S';
    else temp='R';
    string ans(n,temp);

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
    cin>>t;
    while(t--) solve();    
}