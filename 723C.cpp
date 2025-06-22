#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    int n,m;
    cin>>n>>m;

    vector<int> arr(n);
    for(auto &i:arr) cin>>i;

    vector<int> freq(m+1,n/m);
    vector<int> vec;

    for(int i=0;i<n;i++){
        if(arr[i] >m || freq[arr[i]] == 0) vec.push_back(i);
        else freq[arr[i]]--;
    }

    int cnt=0;
    for(int i=1;i<=m;i++){
        while(freq[i] != 0){
           int ind=vec.back();
           vec.pop_back();
           arr[ind]=i;
           cnt++;
           freq[i]--;
        }
    }

    cout<<n/m<<" "<<cnt<<"\n";
    for(auto i:arr) cout<<i<<" ";

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