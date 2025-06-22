#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string prev="yyy";
    int cnt=0;
    for(int i=0;i<n;i++){
       string str;
       cin>>str;

       if(str != prev) cnt++;

       prev=str;
    }
    cout<<cnt;
}