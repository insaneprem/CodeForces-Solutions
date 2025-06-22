#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    
    char ch=str[0];
    if(ch>='a' && ch<='z') str[0]=str[0]-32;
    cout<<str;
    return 0;
}