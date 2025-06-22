#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;

    int n=str.size();

    
    if(str[0] == '-'){
        int last=str[n-1]-'0';
        int seclast=str[n-2]-'0';

        if(last>=seclast) str.pop_back();
        else{
            str.pop_back();
            str.pop_back();
            str.append(to_string(last));
        }
        if(str.size()==2 && str[1] == '0'){
            cout<<0;
            return 0;
        }
    }
    cout<<str;
}