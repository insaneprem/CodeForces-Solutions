#include <bits/stdc++.h>
using namespace std;
#define int long long 

// Function to check if we can make at least 'rope' pieces of size 'size'
bool check(vector<long double> &arr, long double rope, long double size) {
    long double cnt = 0;
    for (long double i = 0; i < arr.size(); i++) {
        cnt += arr[i] / size;  // Calculate how many pieces of 'size' can be cut
        if (cnt >= rope) return true;  // If we have enough pieces, return true
    }
    return false;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long double n, rc;
    cin >> n >> rc;

    vector<long double> arr(n);
    for (auto &i : arr) cin >> i;

    // Set initial bounds
    long double l = 0, r = 1e9;

    int eps=100;
    while (eps--) {
       int mid=(l+r)/2;
       (check(arr,rc,mid)) ? l=mid: r=mid;
    }

    cout<<r;

    
    
}
