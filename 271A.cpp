#include <bits/stdc++.h> 
using namespace std;
bool all(int num){
    map<int,int> mpp;
    while(num){
        mpp[num%10]++;
        num=num/10;
    }
    for(auto i:mpp) if(i.second>1) return false;
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
   int n;
   cin>>n;
   
   for(int i=n+1;;i++){
       if(all(i)){
           cout<<i;
           return 0;
       }
   }
}