#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;

    for(auto i:str){
        if(i == 'H' || i=='Q' || i=='9'){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}