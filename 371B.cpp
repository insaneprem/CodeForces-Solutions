#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;

    if(a == b){
        cout<<0;
        return 0;
    }

    int common=__gcd(a,b);


    int x=a/common;
    int y=b/common;

    int ans=0;

    while(x != 1){
        if(x%5 == 0) x/=5;
        else if(x%3 == 0) x/=3;
        else if(x%2 == 0) x/=2;
        else{
        cout<<-1;
        return 0;
        }
        ans++;
    }

    while(y != 1){
        if(y%5 == 0) y/=5;
        else if(y%3 == 0) y/=3;
        else if(y%2 == 0) y/=2;
        else{
            cout<<-1;
        return 0;
        }
        ans++;
    }

    cout<<ans;

   
}