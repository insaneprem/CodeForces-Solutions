#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
ld check(vector<ld> &c,vector<ld> &s,ld n,ld mid){
    ld time=0;

    for(ld i=0;i<n;i++){
        ld dis=abs(mid-c[i]);
        ld t=dis/s[i];
        time=max(time,t);
    }

    return time;
}
void solve(){
    ld n;
    cin>>n;

    vector<ld> coordinate(n),speed(n);
    for(auto &i:coordinate) cin>>i;
    for(auto &i:speed) cin>>i;

    ld l=*min_element(coordinate.begin(),coordinate.end());
    ld r=*max_element(coordinate.begin(),coordinate.end());

    for(ld i=0;i<101;i++){
        ld mid1=l+(r-l)/3;
        ld mid2=r-(r-l)/3;

        (check(coordinate,speed,n,mid1) <check(coordinate,speed,n,mid2)) ? r=mid2 : l=mid1;
    }
    cout<<fixed<<setprecision(10);
    cout<<check(coordinate,speed,n,l);
}
signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ld t=1;
    // cin>>t;
    while(t--) {
        solve();
        cout<<"\n";
    }
}