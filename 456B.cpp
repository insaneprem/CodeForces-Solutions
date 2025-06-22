#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;

    int n=str.size();

    int num;

    if(n == 1) num=str[0]-'0';
    else num=(str[n-2]-'0')*10+str[n-1]-'0';

    if(num% 4 == 0) cout<<4;
    else cout<<0;
}