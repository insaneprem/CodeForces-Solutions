#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;
    int sum=0;
    int ans=0;
    while(str.size()>1){
         for(int i=0;i<str.size();i++){
           sum+=str[i]-'0';
         }
         ans++;
         str=to_string(sum);
         sum=0;
    }

    cout<<ans;
    
}