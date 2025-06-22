#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;

    map<char,int> mpp;
    for(auto i:str) mpp[i]++;

    for(auto i :mpp){
        if(i.second % n != 0){
            cout<<-1<<endl;
            return 0;
        }
    }
    string ans="";
    for(auto i:mpp){
       int time=(n/i.second);
       ans.append(time,i.first);
    }

    for(int i=0;i<n;i++){
        cout<<ans;
    }
    
}