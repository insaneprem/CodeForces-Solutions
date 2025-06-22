#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector <int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    sort(arr.begin(),arr.end());
    int presum=0;
    
    int ans=0;
    for(auto i:arr){ 
        if(i>=presum){
        ans++;
        presum+=i;
        } 

    }
    cout<<ans;
}