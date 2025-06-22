#include <iostream>
using namespace std;
int main(){
    int num=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>num;
            if(num == 1) cout<<abs(i-2)+abs(j-2)<<endl;
        }
    }
    return 0;
}