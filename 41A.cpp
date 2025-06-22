#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    cin>>b;

    reverse(b.begin(),b.end());
    
    cout<<(a == b ? "YES" : "NO");
}