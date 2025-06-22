#include <bits/stdc++.h>
using namespace std;

bool check(int x, vector<int>& arr, int k) {
    int cnt = 0;
    int l = 0, r = arr.size() - 1;
    while (l <= r) {
        if (arr[l] + arr[r] <= x) {
            l++;
            r--;
        } else {
            r--;
        }
        cnt++;
    }
    return (cnt > k);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int l = arr[n - 1];
    int r = arr[n - 1] * 2;

    while (l <= r) {
        int mid = l + (r - l) / 2; 
        if (check(mid, arr, k)) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << l << endl;
    return 0;
}
