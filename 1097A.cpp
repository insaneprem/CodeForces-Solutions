#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;

    char rank=str[0];
    char suit=str[1];

    int n=5;
    while(n--){
        string card;
        cin>>card;

        if(card[0] == rank || card[1] == suit){
            cout<<"YES";
            return 0; 
        }
    }
    cout<<"NO";
}