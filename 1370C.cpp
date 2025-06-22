#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
     int n;
     cin>>n;


     if(n == 1) cout<<"FastestFinger";
     else if(n%2) cout<<"Ashishgup";
     else{
        bool a=1;
        while(n%2 == 0) a = !a, n=n/2;
        
        if(n==1){
            if(a) cout<<"FastestFinger";
            else cout<<"Ashishgup";
        }
        else if(!a) cout<<"FastestFinger";
        else cout<<"Ashishgup";
     }

     cout<<"\n";
}
signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    // t=1;
    while(t--) solve();
}