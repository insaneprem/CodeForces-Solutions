#include <iostream>
using namespace std;
int lsum(int n){
    int ans=(n*(n+1))/2;
    return ans;
}
int main(){
     int n;
     cin>>n;

     int level=0;
     int cube=0;

     while(cube<=n){
        level++;
        cube+=lsum(level);
     }

     cout<<level-1<<endl;
}