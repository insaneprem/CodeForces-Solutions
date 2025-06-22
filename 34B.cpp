#include <bits/stdc++.h>
#include <vector>

using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector <int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    int ans =0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(arr[i]<0 && m){
            ans-=arr[i];
            m--;
        }
        else break;
    }
    cout<<ans;
}