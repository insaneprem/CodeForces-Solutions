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
int subtreesum[200005];
int dp[200005];
int val[200005];
int maxi=-1;
void dfs(int node,int par,vector<vector<int>> &adj){
    subtreesum[node]=val[node];
    dp[node]=0;

    for(auto e:adj[node]){
        if(e == par) continue;

        dfs(e,node,adj);
        subtreesum[node]+=subtreesum[e];
        dp[node]+=(subtreesum[e]+dp[e]);
    }
}
void reroot(int node,int par,vector<vector<int>> &adj){
    maxi=max(maxi,dp[node]);
    for(auto e:adj[node]){
        if(e == par) continue;

        subtreesum[node]-=subtreesum[e];
        dp[node]-=(dp[e]+subtreesum[e]);

        subtreesum[e]+=subtreesum[node];
        dp[e]+=(dp[node]+subtreesum[node]);

        reroot(e,node,adj);

        subtreesum[e]-=subtreesum[node];
        dp[e]-=(dp[node]+subtreesum[node]);

        subtreesum[node]+=subtreesum[e];
        dp[node]+=(dp[e]+subtreesum[e]);

    }
}
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>val[i];
    vector<vector<int>> adj(n+1);
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1,0,adj);
    reroot(1,0,adj);

    cout<<maxi;

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
