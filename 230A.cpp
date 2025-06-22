#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int s,n;
    cin>>s>>n;

    vector<pair<int,int>> arr(n);

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        arr[i]={a,b};
    }

    sort(arr.begin(),arr.end());

    for(auto i:arr){
        if(s<=i.first){
            cout<<"NO";
            return 0;
        }
        else s+=i.second;
    }

    cout<<"YES";
}