#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> rat;
    vector<string> woman;
    vector<string> man;
    vector<string> child;
    string cap;

    int n;
    cin>>n;
    while(n--){
       string a,b;
       cin>>a>>b;

       if(b == "rat") rat.push_back(a);
       else if(b == "child"|| b== "woman") woman.push_back(a);
       else if(b == "man") man.push_back(a);
       else cap=a;
    }

    for(auto i:rat) cout<<i<<endl;
    for(auto i:woman) cout<<i<<endl;
    for(auto i:man) cout<<i<<endl;
    cout<<cap;

}