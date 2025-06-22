#include <iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int ans=0;
    while(n){
        int dig=n%10;
        if(dig == 4 || dig == 7) ans++;
        n=n/10;
    }

    if(ans ==4 || ans == 7) cout<<"YES";
    else cout<<"NO";
}


