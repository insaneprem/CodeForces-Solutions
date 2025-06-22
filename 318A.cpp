#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;

    int oddrange=ceil(static_cast<double> (n)/2);

    if(k<=oddrange) cout<<1+(k-1)*2;
    else cout<<2+(k-oddrange-1)*2;
}