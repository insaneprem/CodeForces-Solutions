#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long x, y;

    cin >> x >> y;
    long long n;
    cin >> n;
    x=(x%MOD +MOD)%MOD;
    y=(y%MOD +MOD)%MOD;

    long long third=((y-x)%MOD+MOD)%MOD;
    n--;

    if(n%6 == 0){     cout<<x;}
    else if(n%6 == 1){cout<<y;}
    else if(n%6 == 2){cout<<third;}
    else if(n%6 == 3){cout<<((0-x)%MOD +MOD)%MOD;}
    else if(n%6 == 4){cout<<((0-y)%MOD +MOD)%MOD;}
    else if(n%6 == 5){cout<<((0-third)%MOD +MOD)%MOD;}
    return 0;
}
