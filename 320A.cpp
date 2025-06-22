#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); ) {
        if (str[i] == '1') {
            if (str.substr(i, 3) == "144") {
                i += 3;
            } else if (str.substr(i, 2) == "14") {
                i += 2;
            } else if (str[i] == '1') {
                i += 1;
            } else {
                cout << "NO" << endl;
                return 0;
            }
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
