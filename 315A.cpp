#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int>> bottles(n);
    for (int i = 0; i < n; i++) {
        cin >> bottles[i].first >> bottles[i].second;
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (i != j && bottles[i].first == bottles[j].second) {
                found = true;
                break;
            }
        }
        if (!found) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
