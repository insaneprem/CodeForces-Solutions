#include <bits/stdc++.h>
using namespace std;
int main(){
  map<int,int> mpp;

  for(int i=0;i<4;i++){
    int a;
    cin>>a;
    mpp[a]++;
  }

  int ans=0;

  for(auto i:mpp) ans+=i.second-1;
  
  cout<<ans;

}