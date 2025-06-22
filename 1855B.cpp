#include <bits/stdc++.h>
using namespace std;
int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        for(int i=1;;i++){
            if(n%i != 0){
                cout<<i-1<<endl;
                break;
            }
        }
    }
    return 0;
}