#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    int arr[26]={0};

    for(auto i:a) arr[i-'A']++;
    for(auto i:b) arr[i-'A']++;

    for(auto i:c) arr[i-'A']--;

    for(auto i:arr){
        if(i != 0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

    
}