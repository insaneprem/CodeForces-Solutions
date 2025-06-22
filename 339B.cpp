#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    cin>>a>>b;
    long long time=0;
    long long prev=1;

    for(long long i=0;i<b;i++){
       long long h;
       cin>>h;

       if(h<prev) time+=a-(prev-h);
       else time+=h-prev;

       prev=h;
    }
    cout<<time;
}