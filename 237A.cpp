#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<pair<int,int>,int> mpp;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        mpp[{a,b}]++;
    }

    int ans=0;
    for(auto i:mpp){
        ans=max(ans,i.second);
    }
    cout<<ans;
}