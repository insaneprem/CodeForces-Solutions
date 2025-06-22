#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;


    if(x1 == x2){
        int dis=abs(y2-y1);
        cout<<x1+dis<<" "<<y1<<" "<<x2+dis<<" "<<y2;
    }
    else if(y1 == y2){
        int dis=abs(x2-x1);
        cout<<x1<<" "<<y1+dis<<" "<< x2<<" "<<y2+dis;
    }
    else{
         if(abs(x2-x1) != abs(y2-y1)){
            cout<<-1;
            return 0;
         }
         cout<<x2<<" "<<y1<<" "<<x1<<" "<<y2;
    }
    
}