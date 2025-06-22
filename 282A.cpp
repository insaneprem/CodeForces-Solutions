#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    char a,b,c;
    while(n--){
       cin>>a>>b>>c;

       if(a =='+' || b=='+' || c =='+') ans++;
       else ans--;
    }
    cout<<ans;
}