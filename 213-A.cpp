#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,c,num=0;
    while(n--){
        cin>>a>>b>>c;
        num+=((a+b+c)>=2) ? 1 : 0;
    }
    cout<<num;
    return 0;
}