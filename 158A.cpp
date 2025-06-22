#include <bits/stdc++.h> 
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    
    vector<int> arr(a);
    
    for(auto &i:arr) cin>>i;
    
    int pass=arr[b-1];
    int cnt=0;
    for(auto i:arr){
        if(i>=pass && i>0) cnt++;
    }
    cout<<cnt;
}