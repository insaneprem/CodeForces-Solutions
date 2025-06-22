#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;
    
    string ans="";
    for(int i=0;i<str.size();i++){
        if(str[i] == '.') ans+='1';
        else{
            if(str[i+1] == '.') ans+='1';
            else ans+='2';
            i++;
        }
    }

    cout<<ans;
}