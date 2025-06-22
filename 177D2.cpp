#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m,c;
    cin>>n>>m>>c;

    vector<int> arr(n+1);
    for(int i=1;i<=n;i++) cin>>arr[i];


    vector<int> conti(n+2,0);

    for(int i=1;i<=m;i++){
        int val;
        cin>>val;
        conti[i]+=val;
        conti[n-m+i+1]-=val;
    }

    for(int i=1;i<=n;i++) conti[i]+=conti[i-1];

    // for(auto i:conti) cout<<i<<" ";

    for(int i=1;i<=n;i++) cout<<(conti[i]+arr[i])%c<<" ";
}