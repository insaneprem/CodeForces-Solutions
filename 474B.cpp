#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<int> arr(n);
    for(auto &i:arr) cin>>i;

    vector<int> ans(n);
    ans[0]=1;

    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]+arr[i-1];
    }

    int m;
    cin>>m;

    while(m--){
        int num;
        cin>>num;

        int ind=upper_bound(ans.begin(),ans.end(),num)-ans.begin();
        cout<<ind<<endl;
    }
}