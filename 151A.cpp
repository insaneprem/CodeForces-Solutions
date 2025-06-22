#include <iostream>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int totalml=k*l;
    int slice=c*d;
    //p = salt;

    int ans=min(totalml/nl,min((p/np),slice));

    cout<<ans/n;
    return 0;
}