#include <bits/stdc++.h>
using namespace std;

//                /\
//        /\     /\/\
// /\    /\/\   /\/\/\

// 2      6       8

// 2     2+4    2+4+6    2(1+2+3..n) -->vertical card
// 0      1       2      (1+2+3...n-1) -->horizontal cauchy_distribution

// 2(n*(n-1))2+n(n-1)/2

// (2n^2 +2 n)/2 +(n^2-n)/2

// (3n^2+n)/2

vector<long long> arr;
void solve(){
    for(long long i=1;i<=100000;i++){
        arr.push_back((3*i*i + i)/2);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin>>t;
    solve();
    while(t--){
        long long n;
        cin>>n;

        long long cnt=0;
        while(n){
           auto it=upper_bound(arr.begin(),arr.end(),n)-arr.begin();
           if(it == 0) break;
           it--;
           n-=arr[it];
           cnt++;
        }
        cout<<cnt<<endl;
    }
}