#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][3];

    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    for(int j=0;j<3;j++){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i][j];
        }
        if(sum != 0){
            cout<<"NO";
            return;
        }
    }

    cout<<"YES";
}