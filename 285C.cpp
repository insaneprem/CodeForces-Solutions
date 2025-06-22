#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;

    long long arr[n];
    for(long long i=0;i<n;i++) cin>>arr[i];

    sort(arr,arr+n);

    long long num=1;
    long long ans=0;
    for(long long i=0;i<n;i++){
       ans+=abs(arr[i]-num);
       num++;
    }
    cout<<ans;
}