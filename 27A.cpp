#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++) cin>>arr[i];

    sort(arr.begin(),arr.end());
    int num=1;

    for(auto i:arr){
        if(i != num){
            cout<<num;
            return 0;
        }
        num++;
    }

    cout<<n+1;


}