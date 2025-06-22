#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string num;
    cin>>num;

    int ans=0;

    for(int i=0;i<n;i++){
        int digit=num[i]-'0';
        if(digit != 4 && digit != 7){
            cout<<"NO";
            return 0;
        }
        if(i<n/2) ans+=digit;
        else ans-=digit;
    }
    if(ans ==0) cout<<"YES";
    else cout<<"NO";
}