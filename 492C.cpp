#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,max,avg;
    cin>>n>>max>>avg;

    vector<pair<long long,long long>> arr;

    for(long long i=0;i<n;i++){
        long long a,b;
        cin>>a>>b;
        arr.push_back({b,a});
    }

    sort(arr.begin(),arr.end());
    long long point=0;
    for(auto i:arr) point+=i.second;

    long long pointreq=(avg*n)-point;
    
    long long ans=0;
    for(auto i:arr){
       if(pointreq <= 0) break;
       long long cangive=max-i.second;
       if(cangive<=pointreq){
         ans+=i.first*cangive;

         pointreq-=cangive;
       }
       else{
          ans+=pointreq*i.first;
          pointreq=0;
       }
    }

    cout<<ans;
    
}