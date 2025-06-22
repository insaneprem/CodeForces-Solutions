#include <bits/stdc++.h>
using namespace std;
const int MOD=1000000007;
int t,k;
int dp[100013]{};
int solve(int n){
    if(n<k) return 1;

    return solve(n-k)+solve(n-1);
}

void tab(){
    for(int i=0;i<k;i++) dp[i]=1;

    for(int i=k;i<=100000;i++){
        dp[i]=(dp[i-k]+dp[i-1])%MOD;
    }
    
    for(int i=1;i<=100000;i++) dp[i]=(dp[i]+dp[i-1])%MOD;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>t>>k;
    tab();
    while(t--){
        int a,b;
        cin>>a>>b;

        int result = (dp[b] - dp[a-1] + MOD) % MOD;
        cout << result << endl;
    }
}
