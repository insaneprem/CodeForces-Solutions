#include <bits/stdc++.h>
using namespace std;
vector<bool> primes(10000000,true);

void solve(){
    primes[0]=primes[1]=false;

    for(int i=2;i*i<=10000000;i++){
        if(primes[i]){
             for(int j=i*i;j<=10000000;j+=i){
                  primes[j]=false;
              }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    solve();

    for(int i=2;;i++){
        if(n == 0) break;
        if(primes[i]){
            cout<<i<<" ";
            n--;
        }
    }
}