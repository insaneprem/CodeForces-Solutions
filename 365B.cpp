#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &i:arr) cin>>i;
    int len=0;
    int maxlen=0;

   for(int i=2;i<n;i++){
      if(arr[i] == arr[i-1]+arr[i-2])len++;
      else len=0;
      maxlen=max(maxlen,len);
   }
   if(n == 1) cout<<1;
   else cout<<maxlen+2;
}