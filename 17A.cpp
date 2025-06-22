#include <bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main(){
    int n,k;
    cin>>n>>k;

    vector<int> primes;

    for(int i=2;i<=n;i++){
        bool flag=true;
        for(int j=2;j*j<=i;j++){
            if(i%j == 0) {
                flag=false;
                break;
            }
        }
        if(flag) primes.push_back(i);
    }
    int cnt=0;

    for(int i=0;i<primes.size()-1;i++){
        int num=1+primes[i]+primes[i+1];
        if(isprime(num) && num<=n) cnt++;

        if(cnt >=k){
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";

    
}