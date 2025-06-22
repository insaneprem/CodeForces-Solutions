#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve() {
    int q;
    cin >> q;

    map<char,int> mp1;
    map<char,int> mp2;
    mp1['a']++,mp2['a']++;
    int slen = 1, tlen = 1;

    while (q--) {
        int op, time;
        string str;
        cin >> op >> time >> str;

        if (op == 1) {
            for(auto i:str) mp1[i]++;
            slen += time * str.size();
        } else {
            for(auto i:str) mp2[i]++;
            tlen += time * str.size();
        }

        if (mp2.size()>=2 || (mp1.size() == 1 && mp2.size() == 1 && tlen>slen)) cout <<"YES";
        else  cout <<"NO";
        
        cout << "\n";
    }
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