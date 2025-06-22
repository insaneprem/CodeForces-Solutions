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

const int INF = 0xFFFFFFFFFFFFFFFLL;
const int SEED = chrono::steady_clock::now().time_since_epoch().count();
mt19937_64 rng(SEED);

inline int rnd(int l = 0, int r = INF) {
    return uniform_int_distribution<int>(l, r)(rng);
}

class CMP {
public:
    bool operator()(ii a, ii b) { // For min priority_queue.
        return !(a.first < b.first || (a.first == b.first && a.second <= b.second));
    }
};

void add(map<int, int> &m, int x, int cnt = 1) {
    auto jt = m.find(x);
    if (jt == m.end())
        m[x] = cnt;
    else
        jt->second += cnt;
}

void del(map<int, int> &m, int x, int cnt = 1) {
    auto jt = m.find(x);
    if (jt == m.end()) return; 
    if (jt->second <= cnt)
        m.erase(jt);
    else
        jt->second -= cnt;
}

bool cmp(const ii &a, const ii &b) {
    return a.first < b.first || (a.first == b.first && a.second < b.second);
}

#define bcnt(x) __builtin_popcountll(x)
void solve(){
    int n,l,r;
    cin>>n>>l>>r;

    vector<int> ans;
    for(int i=1;i<=n;i++){
       int val=((l+i-1)/i)*i;
       if(val<l || val> r){
         cout<<"NO";
         return;
       }
       
       ans.push_back(val);
    }

    cout<<"YES\n";

    for(auto &i:ans) cout<<i<<" ";
}
signed main(void) {
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--) {
        solve();
        cout<<"\n";
    }
    insaneprem();
    return 0;
}
