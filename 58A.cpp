#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>> str;

    string req="hello";
    int j=0;

    for(int i=0;i<str.size();i++){
        if(str[i] == req[j]) j++;
    }

    if(j == req.size()) cout<<"YES";
    else cout<<"NO";
}