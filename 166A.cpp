#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> arr;

    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        arr.push_back({a, b});
    }

    sort(arr.begin(), arr.end(), [](auto x, auto y){
        if(x.first == y.first) return x.second < y.second;
        return x.first > y.first;
    });

    auto kth = arr[k-1];
    int cnt = 0;

    for(auto &i : arr){
        if(i == kth) cnt++;
    }

    cout << cnt << endl;

    return 0;
}
