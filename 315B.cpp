#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    vector<int> arr(n);

    for(auto &i:arr) cin>>i;
    int inc=0;
    while(m--){
       int a; cin>>a;
       if(a == 1){
          int ind,val; cin>>ind>>val;
          arr[ind-1]=(val-inc);
       }
       else if(a == 2){
          int val; cin>>val;
          inc+=val;
       }
       else{
          int ind; cin>>ind;
          cout<<arr[ind-1]+inc<<endl;
       }
    }
}