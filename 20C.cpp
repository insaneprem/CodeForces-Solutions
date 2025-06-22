#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
typedef pair<int,int> P;
void dijkstra(int src,vector<int> &dist,vector<int> &parent,vector<vector<P>> &adj){
    dist[src]=0;
    priority_queue<P,vector<P>,greater<P>> toexplore;
    toexplore.push({0,src});

    while(!toexplore.empty()){
        int popnode=toexplore.top().second;
        int distsofar=toexplore.top().first;
        toexplore.pop();

        if(distsofar != dist[popnode]) continue;

        for(auto e:adj[popnode]){
            int node=e.first;
            int distadd=e.second;

            if(dist[node]>distsofar + distadd){
                dist[node]=distsofar + distadd;
                parent[node]=popnode;
                toexplore.push({dist[node],node});
            }
        }
    }
}
void solve(){
    int n,m;
    cin>>n>>m;

    vector<vector<P>> adj(n+1);
    for(int i=0;i<m;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }

    vector<int> dist(n+1,LLONG_MAX);
    vector<int> parent(n+1,-1);

    dijkstra(1,dist,parent,adj);

    if(dist[n] == LLONG_MAX) cout<<-1;
    else{
        stack<int> st;

        for(int i=n;i!=-1;i=parent[i]){
            st.push(i);
        }

        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
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