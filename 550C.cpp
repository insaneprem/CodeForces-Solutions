#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    int n = str.size();

    for (int i = 0; i < n; i++) {
        if (str[i] == '8' || str[i] == '0') {
            cout << "YES" << endl;
            cout << str[i] << endl;
            return 0;
        }
        for (int j = i + 1; j < n; j++) {
            int num1 = (str[i] - '0') * 10 + (str[j] - '0');
            if (num1 % 8 == 0) {
                cout << "YES" << endl;
                cout << num1 << endl;
                return 0;
            }
            for (int k = j + 1; k < n; k++) {
                int num2 = (str[i] - '0') * 100 + (str[j] - '0') * 10 + (str[k] - '0');
                if (num2 % 8 == 0) {
                    cout << "YES" << endl;
                    cout << num2 << endl;
                    return 0;
                }
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}
