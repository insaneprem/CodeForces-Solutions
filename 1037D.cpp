#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;

    vector<int> adj[n + 1];

    for (int i = 0; i < n-1; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> arr(n);
    map<int,int> idx;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        idx[arr[i]]=i;
    }
    
    for(auto &v:adj){
        sort(v.begin(),v.end(),[&](auto a,auto b){
             return idx[a]<idx[b];
        });
    }
    
    // for(int i=1;i<=n;i++){
    //   cout<<i<<"->";
    //   for(auto j:adj[i]){
    //     cout<<j<<" ";
    //   }
    //   cout<<endl;
    // }
    queue<pair<int, int>> q;
    q.push({1, -1});

    vector<int> vec;

    while (!q.empty())
    {
        int k = q.size();
        vector<int> st;
        for (int i = 0; i < k; i++)
        {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            
            vec.push_back(node);

            for (auto e : adj[node])
            {
                if (e == parent) continue;
                q.push({e, node});
            }
        }
    }
    
    if(arr == vec) cout<<"YES";
    else cout<<"NO";
     
}
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}