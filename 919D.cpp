#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
typedef pair<int,int> P;
bool dfs(int node,vector<int> adj[],vector<int> &visited){
    visited[node]=1;

    for(auto e:adj[node]){
        if(visited[e] == 0){
            if(dfs(e,adj,visited)) return true;
        }
        else if(visited[e] == 1) return true;
    }

    visited[node]=2;
    return false;
}
void solve(){
   int n,m;
   cin>>n>>m;
   string str;
   cin>>str;

   vector<int> adj[n];
   vector<int> indegree(n,0);
   vector<int> visited(n,0);
   bool flag=true;

   for(int i=0;i<m;i++){
      int u,v;
      cin>>u>>v;
      u--,v--;

      flag &= (u != v);
      adj[u].push_back(v);
      indegree[v]++;
   }
   
   for(int i=0;i<n;i++){
      if(visited[i] == 0){
        if(dfs(i,adj,visited)){
            flag=false;
            break;
        } 
      }
   }

   if(!flag){
      cout<< -1;
      exit(0);
   }

   set<P> st;
   for(int i=0;i<n;i++) st.insert({indegree[i],i});

   vector<vector<int>> values(n,vector<int> (26,0));

   int ans=0;

   while(!st.empty()){
      auto popnode=*st.begin();
      st.erase(st.begin());
      
      int u=popnode.second;
      values[u][str[u]-'a']++;
      
     for(auto e:values[u]) ans=max(ans,e);

     for(auto e:adj[u]){

        for(int ch=0;ch<26;ch++) 
           values[e][ch]=max(values[e][ch],values[u][ch]);
        
        st.erase({indegree[e],e});
        indegree[e]--;
        st.insert({indegree[e],e});

     }
   }
   cout<<ans;
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