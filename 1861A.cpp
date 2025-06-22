#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        string str;
        cin>>str;

        if(str[0] == '1')   cout<<13;
        else if(str[0] == '2') cout<<23;
        else if(str[0] == '3') cout<<31;
        else if(str[0] == '4') cout<<43;
        else if(str[0] == '5') cout<<53;
        else if(str[0] == '6') cout<<67;
        else if(str[0] == '7') cout<<73;
        else if(str[0] == '8') cout<<83;
        else if(str[0] == '9') cout<<97;

        cout<<endl;
    }
}