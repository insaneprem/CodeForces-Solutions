#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    cin>>b;

    int num1=0,num2=0;
    int originalans=stoi(a)+stoi(b);
    string str=to_string(originalans);
    string tocom="";
    for(auto i:str) if(i != '0') tocom+=i;
    int numans=stoi(tocom);
    string updateda="";
    string updatedb="";
    for(auto i:a) if(i != '0') updateda+=i;
    for(auto i:b) if(i != '0') updatedb+=i;

    int updatedans=stoi(updateda)+stoi(updatedb);

    if(numans == updatedans) cout<<"YES";
    else cout<<"NO";
}