#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;

    string ans="";

    for(auto i:str){
        if(i == 'A' || i == 'a' || i=='e' || i =='E' || i=='i' || i == 'I' || i =='o' || i == 'O' || i =='u' || i == 'U' || i=='y'|| i =='Y') continue;
        else{
            ans+='.';
            ans+=tolower(i);
        }
    }

    cout<<ans<<endl;
}