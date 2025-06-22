#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int prev=0;
    int maxcap=0;
    while(n--){
        int a,b;
        cin>>a>>b;
        prev=prev-a+b;
        maxcap=max(maxcap,prev);
    }
    cout<<maxcap<<endl;

    return 0;
}