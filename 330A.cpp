#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<char>> arr(n,vector<char> (m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          cin>>arr[i][j];
        }
    }

    int row=0;
    for(int i=0;i<n;i++){
        bool st=false;
        for(int j=0;j<m;j++){
          if(arr[i][j] == 'S'){
             st=true;
             break;
          }
        }
        if(!st) row++;
    }
    int col=0;

    for(int j=0;j<m;j++){
        bool st=false;
        for(int i=0;i<n;i++){
          if(arr[i][j] == 'S'){
             st=true;
             break;
          }
        }
        if(!st) col++;
    }

    cout<<(row*m+col*n)-(row*col);
}