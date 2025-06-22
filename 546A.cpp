#include <iostream>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;

    int cost=(w * (w + 1) / 2) * k;

    if(cost-n>=0) cout<<cost-n;
    else cout<<0;
    return 0;
}
