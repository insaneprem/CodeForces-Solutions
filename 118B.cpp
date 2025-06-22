#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }
        int num = 0;
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << num;
            if (j < 2 * i) cout << " ";
            if (j < i) num++;
            else num--;
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "  ";
        }
        int num = 0;
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            cout << num;
            if (j < 2 * (n - i) - 2) cout << " ";
            if (j < n - i - 1) num++;
            else num--;
        }
        cout << endl;
    }

    return 0;
}
