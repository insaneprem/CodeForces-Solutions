#include <iostream>
using namespace std;
int main(){
    string str;
    cin>> str;
    int one=0,two=0,three=0;
    for(auto i:str){
        if(i == '1') one++;
        else if(i == '2') two++;
        else if(i == '3') three++;
    }

    string ans(str.size(),' ');
    for(int i=0;i<str.size();i++){
        if(i % 2 == 0){
             if(one){
                 ans[i]='1';
                 one--;
             }        
             else if(two){
                 ans[i]='2';
                 two--;
             }   
             else if(three){
                 ans[i]='3';
                 three--;
             }
        }
        else ans[i]='+';
    }
    cout<<ans<<endl;
    return 0;
 
}