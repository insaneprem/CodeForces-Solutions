#include <bits/stdc++.h>
using namespace std;
#define int long long 
int solve(int n,int jumph,int take,vector<int> type,vector<int> height,vector<int> mass){
    int ans=0;
    for(int i=0;i<n;i++){
        int maxi=0,ind=-1;
        for(int j=0;j<n;j++){
           if(take == type[j] && height[j]<=jumph){
               if(maxi<=mass[j]){
                 maxi=mass[j];
                 ind=j;
               }
           }
        }
        if(ind == -1) break;
        take = !take;
        jumph+=maxi;
        mass[ind]=-1;
        ans++;
    }

    return ans;
}
signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,jumph;
    cin>>n>>jumph;

    vector<int> type(n),height(n),mass(n);

    for(int i=0;i<n;i++) cin>>type[i]>>height[i]>>mass[i];

    int ans1=solve(n,jumph,0,type,height,mass);
    int ans2=solve(n,jumph,1,type,height,mass);

    cout<<max(ans1,ans2);


}