#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin>>n>>x;
    
    int cnt=0;
    for(int i=1;i*i<=x;i++){
        if(x%i == 0){
           int num=x/i;
             
           if(num<=n && i<=n){
              if(num == i) cnt+=1;
              else cnt+=2;
           }
        }
    }

    cout<<cnt;
}