#include <bits/stdc++.h>
using namespace std;
long long nc2(long long n){
    return (n*(n-1)/2);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    

    long long n,d;
    cin>>n>>d;

    vector<long long> arr(n);
    for(auto &i:arr) cin>>i;

    long long ans=0;

    for(long long i=0;i<n;i++){
        auto up=upper_bound(arr.begin(),arr.end(),arr[i]+d);
        up--;
        long long ele=(up-arr.begin())-i;

        if(ele>=2){
            ans+=nc2(ele);
        }
    }    
    cout<<ans;
}