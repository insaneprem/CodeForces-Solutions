#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    
    int sum=0;
    for(int i=0;i<a.size();i++){
         char ch=tolower(a[i]);
         char ch2=tolower(b[i]);

        if(ch-'a' < ch2-'a'){ 
           cout<<-1;
           return 0;
        }
        else if(ch-'a' > ch2-'a'){
            cout<<1;
            return 0;
        }
    }

    cout<<0;
}