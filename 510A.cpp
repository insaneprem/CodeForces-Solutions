#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string s1(m,'#');
    bool flag=true;
    for(int i=0;i<n;i++){
        string s2(m,'.');
        if(i %2 == 0) cout<<s1;
        else{
            if(flag) s2[m-1]='#';
            else s2[0]='#';

            cout<<s2;
            flag= !flag;
        }
        cout<<endl;
    }
}