#include <iostream>
using namespace std;

int main() {
    string num;
    cin >> num;

    for (int i = 0; i < num.size(); i++) {
        int dig = num[i] - '0';
        if (i == 0 && dig == 9) continue;

        if (dig > 4) {
            dig = 9 - dig;
            num[i] = dig + '0';
        }
    }

    cout << num << endl;

    return 0;
}
