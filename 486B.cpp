#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> given(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> given[i][j];
        }
    }

    vector<vector<int>> ans(n, vector<int>(m, 1));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (given[i][j] == 0) {
                for (int k = 0; k < m; k++) {
                    ans[i][k] = 0;
                }
                for (int k = 0; k < n; k++) {
                    ans[k][j] = 0;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (given[i][j] == 1) {
                bool valid = false;
                for (int k = 0; k < m; k++) {
                    if (ans[i][k] == 1) {
                        valid = true;
                        break;
                    }
                }
                for (int k = 0; k < n; k++) {
                    if (ans[k][j] == 1) {
                        valid = true;
                        break;
                    }
                }
                if (!valid) {
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "YES" << endl;
    for (auto& i : ans) {
        for (auto& val : i) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
