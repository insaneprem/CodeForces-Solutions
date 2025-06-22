#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, l;
    cin >> n >> l;

    long long power = 1;
    for (int i = 0; power <= l; i++) {
        if (power == l) {
            cout << "YES" << endl;
            cout << i-1 << endl;
            return 0;
        }
        power *= n; 
    }

    cout << "NO" << endl;

    return 0;
}
