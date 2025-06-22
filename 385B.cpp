#include <bits/stdc++.h>
using namespace std;
long long mod1=1e9+7;
long long p1=31;
vector<long long> occurance;
string str;
long long get_hash(string s){
    long long ans=0;
    for(auto i:s) ans=(ans*31+(i-'a'+1));
    return ans;
}
void solve(){
    long long n=str.size();

    long long h_p=get_hash("bear");
    long long h_s=get_hash(str.substr(0,4));

    if(h_p == h_s) occurance.push_back(0);

    long long p_pow=1;
    for(long long i=0;i<3;i++) p_pow=(p_pow*p1)%mod1;

    for(long long l=1,r=4;r<n;l++,r++){
        long long del=((str[l-1]-'a'+1)*p_pow)%mod1;
        long long add=(str[r]-'a'+1);
        h_s = (((h_s-del+mod1)%mod1)*p1+add)%mod1;
        if(h_p == h_s) {
            occurance.push_back(l);
        }
    }

}
long long ans() {
    for (auto &i : occurance) i += 4;
    long long res = 0;
    for (int i = 0; i < str.size(); i++) {
        int ind = lower_bound(occurance.begin(), occurance.end(), i + 4) - occurance.begin();
        if (ind < occurance.size()) res += str.size()+1 - occurance[ind];
    }
    return res;
}
int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>str;
    solve();

    cout<<ans();
}