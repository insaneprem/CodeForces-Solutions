#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;
    vector<int> prefix(str.size(),0);

    for(int i=1;i<str.size();i++){
        prefix[i]=prefix[i-1]+((str[i] == str[i-1]) ? 1: 0);
    }

    int m;
    cin>>m;

    while(m--){
       int l,r;
       cin>>l>>r;

       cout<<prefix[r-1]-prefix[l-1]<<endl;
    }
}