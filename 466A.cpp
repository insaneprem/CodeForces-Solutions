#include <bits/stdc++.h>
using namespace std;
int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m,a,b;
    cin>>n>>m>>a>>b;

    int passday=n-(n%m);
    int rem=n%m;
    
    int ans=(passday/m)*b + min(rem*a,b);
    
    cout<<min(n*a,ans);
    
}