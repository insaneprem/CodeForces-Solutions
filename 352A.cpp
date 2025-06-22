#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int five=0,zero=0;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a == 0) zero++;
        else five++;
    }

    int sum=five*5;
    
    if(zero == 0) cout<<-1;
    else if(five<9 && zero) cout<<0;
    else{
        string str="";
        five=five-(five%9);
        while(five--) str+='5';
        while(zero--) str+='0';
        cout<<str;
    } 
}