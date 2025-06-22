#include <bits/stdc++.h>
using namespace std;
#define id long long 
#define int long double
int calculatePoorness(int n, const vector<int>& a, int mid,int type) {
    int max_sum = 0 ,current_sum = 0;

    for (int i = 0; i < n; i++) {
        current_sum += (type == 1) ? (a[i] - mid) : (mid-a[i]);
        max_sum = max(max_sum, current_sum);

        if (current_sum < 0) current_sum = 0;
    }

    return max_sum;
}
int Poorness(int n, const vector<int>& a, int mid){
    int first=calculatePoorness(n,a,mid,1);
    int second=calculatePoorness(n,a,mid,0);

    return max(first,second);
}
void solve(){ 
    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto &i : arr) cin >> i;

   
    int l = *min_element(arr.begin(), arr.end());
    int r = *max_element(arr.begin(), arr.end());

   
    for (int i = 0; i < 101; i++){  
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        int poorness1 = Poorness(n, arr, mid1);
        int poorness2 = Poorness(n, arr, mid2);

        (poorness1 > poorness2) ?  l = mid1 : r = mid2; 
    }
        
    

    int result = Poorness(n, arr, r);

    cout << fixed << setprecision(10) << result << endl;

}

signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
    // cin>>t;
    while(t--) {
        solve();
        // cout<<"\n";
    }
}