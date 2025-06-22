#include <iostream>
using namespace std;
bool iscap(char ch){
    if(ch>='A' && ch<='Z') return true;
    else return false;
}
void change(string &str,int len){
    for(int i=0;i<str.size();i++){
        if(i == 0 && !iscap(str[0]) && len == str.size()-1) 
            str[i]=toupper(str[0]);
        else if(iscap(str[i]))
          str[i]=tolower(str[i]);
    }
}
int main(){
    string str;
    cin>> str;
    
    int len=0;
    
    for(auto i:str){
        if(iscap(i)) len++;
    }
    
    if(len == str.size() || (len ==str.size()-1 && !iscap(str[0]))) change(str,len);

    cout<<str;
}