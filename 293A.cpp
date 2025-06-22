#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    int n;
    cin>>n;
    
    string s,t;
    cin>>s;
    cin>>t;

    int onef=0,ones=0,common=0;

    for(int i=0;i<2*n;i++){
        if(s[i] == '1' && t[i] == '1') common++;
        if(s[i] == '1') onef++;
        if(t[i] == '1') ones++;
    }

    if(onef>ones){
        cout<<"First";
        return;
    }

    if(common == 0){
      if(onef+1 >= ones) cout<<"Draw";
      else cout<<"Second";
    }
    else if(common%2 == 1){
      if(onef == ones) cout<<"First";
      else if(onef+2>=ones) cout<<"Draw";
      else cout<<"Second";
    }
    else{
       if(onef+1>=ones) cout<<"Draw";
       else cout<<"Second";
    }
}
signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
}