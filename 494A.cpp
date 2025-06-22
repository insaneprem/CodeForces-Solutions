#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    string str;
    cin>>str;
    int n=str.size();

    int open=0,cnt=0;

    int ind=0;
    for(int i=0;i<n;i++) if(str[i] == '#') ind=i;

    for(int i=0;i<ind+1;i++){
        if(str[i] == '(') open++;
        else if(str[i] == ')') open--;
        else cnt++,open--;
        
        if(open<0){
            cout<<-1;
            return;
        }
    }

    int open2=0;

    for(int i=n-1;i>=ind+1;i--){
        if(str[i] == '(') open2--;
        else if(str[i] == ')') open2++;
        if(open2<0){
            cout<<-1;
            return;
        }
    }

    if(open2>open){
        cout<<-1;
        return;
    }

    for(int i=0;i<cnt-1;i++) cout<<1<<"\n";
    cout<<1+open-open2;
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