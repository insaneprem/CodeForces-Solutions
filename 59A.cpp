#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;
        
    int low=0;
    int up=0;
    for(auto i:str) (islower(i) ? low++ : up++);

    if(low>=up) transform(str.begin(),str.end(),str.begin(),::tolower);
    else transform(str.begin(),str.end(),str.begin(),::toupper);

    cout<<str;
}