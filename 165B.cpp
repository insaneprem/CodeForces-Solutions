#include <bits/stdc++.h>
using namespace std;
bool ispossible(int v,int n,int k){
     int ans=0;

     while(v){
        ans+=v;
        v=v/k;
     }

     return ans>=n;

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;

    int l=1,r=n;

    while(r-l>1){
        int mid=(l+r)/2;

        (ispossible(mid,n,k)) ? r=mid : l=mid;
    }

    cout<<r;
}