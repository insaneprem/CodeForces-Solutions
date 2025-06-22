#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> cashier(n);

    for(int i=0;i<n;i++){
        cin>>cashier[i];
    }

    int ans=1e9;
    for(int i=0;i<n;i++){
        int time=0;
        for(int j=0;j<cashier[i];j++){
            int a;
            cin>>a;
            time+=a;
        }
        time=time*5;
        time+=15*cashier[i];
        ans=min(ans,time);
    }

    cout<<ans;
}