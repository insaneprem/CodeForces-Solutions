#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> arr;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.push_back({a, i + 1});
    }

    sort(arr.begin(), arr.end());

    int i = 0;
    vector<int> ans;
    int time = 0;

    while (i < n && time + arr[i].first <= k) {
        time += arr[i].first;
        ans.push_back(arr[i].second);
        i++;
    }

    cout << ans.size() << endl;
    for (auto i : ans) cout << i << " ";
 
    return 0;
}
