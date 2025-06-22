#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
int cycle_start=-1;
int cycle_end=-1;
bool dfs(int node,vector<int> adj[],vector<bool> &visited,vector<int> &len,vector<int> &parent,int k,int pl){
    visited[node]=1;
    len[node]=++pl;

    for(auto e:adj[node]){
        if(!visited[e]){
            parent[e]=node;
            if(dfs(e,adj,visited,len,parent,k,pl)) return true;
        }
        else if(e != parent[node] && len[node]-len[e]>=k){ 
            cycle_start=e;
            cycle_end=node;
            return true;
        }
    }

    return false;
}
void solve(){
    int n,m,k;
    cin>>n>>m>>k;

    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
       int u,v;
       cin>>u>>v;
       adj[u].push_back(v);
       adj[v].push_back(u);
    }

    vector<int> len(n+1,0);
    vector<bool> visited(n+1,0);
    vector<int> parent(n+1,-1);

    for(int i=1;i<=n;i++){
        if(!visited[i]){
            if(dfs(i,adj,visited,len,parent,k,0)){
                 stack <int> st;
                 for(cycle_end;cycle_end != cycle_start;cycle_end=parent[cycle_end]) st.push(cycle_end);
                 st.push(cycle_start);
                 cout<<st.size()<<'\n';
                 while(!st.empty()){
                    cout<<st.top()<<" ";
                    st.pop();
                 }
                 return;
            };
        }
    }

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
        cout<<"\n";
    }
}