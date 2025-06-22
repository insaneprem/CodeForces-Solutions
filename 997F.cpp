#ifdef insaneprem
#include <header.h>
#else
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,mmx")
#pragma GCC optimize("-ffloat-store")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define dbg(args...) 42;
#define endl "\n"
#endif

template <class Fun>
class y_combinator_result {
    Fun fun_;

public:
    template <class T>
    explicit y_combinator_result(T &&fun) : fun_(std::forward<T>(fun)) {}
    template <class... Args>
    decltype(auto) operator()(Args &&...args) { return fun_(std::ref(*this), std::forward<Args>(args)...); }
};
template <class Fun>
decltype(auto) y_combinator(Fun &&fun) { return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun)); }

using namespace std;
using namespace __gnu_pbds;
#define fo(i, n) for (int i = 0; i < (n); ++i)
#define repA(i, j, n) for (int i = (j); i <= (n); ++i)
#define repD(i, j, n) for (int i = (j); i >= (n); --i)
#define all(x) begin(x), end(x)
#define sz(x) ((int)(x).size())
#define eb emplace_back
#define int long long

using mytype = long double;
using ii = pair<int, int>;
using vii = vector<ii>;
using vi = vector<int>;

template <class T>
using ordered_set = __gnu_pbds::tree<T, __gnu_pbds::null_type, less<T>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
// X.find_by_order(k) return kth element. 0 indexed.
// X.order_of_key(k) returns count of elements strictly less than k.

const auto start_time = std::chrono::high_resolution_clock::now();
void insaneprem() {
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end_time - start_time;
    cerr << "Time Taken : " << diff.count() << "\n";
}

#define bcnt(x) __builtin_popcountll(x)
void solve(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(auto &i:arr) cin>>i;

    map<int,int> dp;
    int num=-1;
    int ans=0;

    for(auto i:arr){
       dp[i]=1+dp[i-1];
       if(dp[i]>ans){
         ans=dp[i];
         num=i;
       }
    }

    vector<int> res;
    for(int i=n-1;i>=0;i--){
        if(arr[i] == num){
            res.push_back(i+1);
            num--;
        }
    }

    reverse(res.begin(),res.end());
    cout<<ans<<"\n";
    for(auto &i:res) cout<<i<<" ";
}
signed main(void) {
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1;
    // cin >> T;
    while (T--) {
        solve();
        cout<<"\n";
    }
    insaneprem();
    return 0;
}
