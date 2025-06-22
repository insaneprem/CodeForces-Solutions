#include <bits/stdc++.h>
using namespace std;
#define int long long 

void solve(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(auto &i:arr) cin>>i;

    vector<pair<bool,int>> left(n,{0,-1}),right(n,{0,-1});

    pair<int,int> mini={INT_MAX,-1};
    pair<int,int> maxi={INT_MAX,-1};

    for(int i=0;i<n;i++){
       if(arr[i]<=mini.first) mini={arr[i],i+1};
       else left[i]={1,mini.second};
      
       if(arr[n-i-1]<=maxi.first) maxi={arr[n-i-1],n-i};
       else right[n-i-1]={1,maxi.second};
    }

    for(int i=0;i<n;i++){
        if(left[i].first && right[i].first){
            cout<<"YES"<<"\n";
            cout<<left[i].second<<" "<<i+1<<" "<<right[i].second<<"\n";
            return ;
        }
    }

    cout<<"NO"<<"\n";

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