#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double w;
    cin >> n >> w;
    
    vector<double> arr(2*n);
    for(int i = 0; i < 2*n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    double min_girl = arr[0];
    double min_boy = arr[n];

    double girlget = min(min_girl, min_boy / 2.0);
    double total_water = 3 * n * girlget;

    cout << fixed << setprecision(9) << min(w, total_water) << endl;

    return 0;
}
