#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int one=0, two=0;

    for(int i=0;i<n;i++){
        int a; cin>>a;
        if(a == 100 ) one++;
        else if(a == 200) two++;
    }
    
    
    if(((one)+(two*2)) %2 == 1) cout<<"NO";
    else{
        int half_sum = (one + 2 * two) / 2;
        if(half_sum % 2 == 0 || (half_sum % 2 == 1 && one > 0)) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }
}