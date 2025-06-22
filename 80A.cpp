#include <bits/stdc++.h>
using namespace std;
bool isprime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i == 0) return false;
    }
    return true;
}
int main(){
    int n,m;
    cin>>n>>m;
     
    bool flag=false;
    for(int i=n+1;i<=m;i++){
       if(isprime(i) && i!=m){
          break;
       }
       if(isprime(i) && i == m) flag=true;
    }

    if(flag) cout<<"YES";
    else cout<<"NO";

}