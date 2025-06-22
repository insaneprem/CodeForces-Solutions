#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string ans = "";

    while(n>0 && n%7 != 0) ans+='4',n=n-4;
    while(n>0 && n%7 == 0) ans+='7',n=n-7;

    if(n<0) cout<<-1;
    else cout <<ans;

    return 0;
}