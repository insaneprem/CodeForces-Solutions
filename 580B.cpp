#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,d;
    cin>>n>>d;

    vector<pair<long long,long long>> arr(n);

    for(long long i=0;i<n;i++){
        long long a,b;
        cin>>a>>b;
        arr[i]={a,b};
    }

    sort(arr.begin(),arr.end());

    long long i=0,j=0;
    long long fr=0;
    long long ans=0;
    while(i<n && j<n){
       fr+=arr[j].second;
       while((arr[j].first-arr[i].first)>=d){
          fr-=arr[i].second;
          i++;
       }
       ans=max(ans,fr);
       j++;
    }

    cout<<ans;
}