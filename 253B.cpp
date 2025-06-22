#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   

    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &i:arr) cin>>i;

    sort(arr.begin(),arr.end());

    int ans=1e9;

    for(int i=0;i<n;i++){
        int ele=2*arr[i];
        int j=upper_bound(arr.begin()+i,arr.end(),ele)-arr.begin();
        ans=min(ans,abs((n-j)+i));
    }

    cout<<ans;
}