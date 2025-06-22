#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
vector<int> segTree,Lazy;
int merge(int a,int b){
    return min(a,b);
}
void propogate(int start,int end,int index){
    if(start == end){
        Lazy[index]=0;
        return;
    }

    Lazy[2*index]+=Lazy[index];
    Lazy[2*index+1]+=Lazy[index];
    Lazy[index]=0;
}
void build(vector<int> &arr,int start,int end,int index){
    if(start == end){
        segTree[index]=arr[start];
        return;
    }

    int mid=(start+end)/2;
    int left=2*index;
    int right=2*index+1;

    build(arr,start,mid,left);
    build(arr,mid+1,end,right);

    segTree[index]=merge(segTree[left],segTree[right]);
}

void update(int start,int end,int index,int l,int r,int val){
    if(Lazy[index] != 0){
        segTree[index]+=Lazy[index];
        propogate(start,end,index);
    } 

    if(start>=l && end<=r){
        segTree[index]+=val;
        Lazy[index]=val;
        propogate(start,end,index);
        return;
    }

    if(l>end || r<start)
       return;
    
    int mid=(start+end)/2;
    int left=2*index;
    int right=2*index+1;

    update(start,mid,left,l,r,val);
    update(mid+1,end,right,l,r,val);

    segTree[index]=merge(segTree[left],segTree[right]);

}
int query(int start,int end,int index,int l,int r){
    if(Lazy[index] != 0){
        segTree[index]+=Lazy[index];
        propogate(start,end,index);
    }

    if(start>=l && end<=r){
        return segTree[index];
    }

    if(l>end || r<start)
       return LLONG_MAX;
    
    int mid=(start+end)/2;
    int left=2*index;
    int right=2*index+1;

    int leftans=query(start,mid,left,l,r);
    int rightans=query(mid+1,end,right,l,r);


    return merge(leftans,rightans);
}
void getans(int n){
        int l, r, v;
        string input;
        getline(cin >> ws, input);  // Read full input line

        stringstream ss(input);
        vector<int> args;
        while (ss >> v) args.push_back(v);

        if (args.size() == 2) {
            l = args[0];
            r = args[1];

            if (l <= r) {
                cout << query(0, n - 1, 1, l, r) << "\n";
            } else {
        
                int leftAns = query(0, n - 1, 1, l, n - 1);
                int rightAns = query(0, n - 1, 1, 0, r);
                cout << merge(leftAns, rightAns) << "\n";
            }
        } else {
            l = args[0];
            r = args[1];
            v = args[2];

            if (l <= r) {
                update(0, n - 1, 1, l, r, v);
            } else {
                
                update(0, n - 1, 1, l, n - 1, v);
                update(0, n - 1, 1, 0, r, v);
            }
        }
}

void solve(){
     int n,q;
     cin>>n;

     vector<int> arr(n);
     for(auto &i:arr) cin>>i;

     segTree.resize(4*n);
     Lazy.resize(4*n,0);

     build(arr,0,n-1,1);

     cin>>q;
     
     while(q--){
        getans(n);
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
        // cout<<"\n";
    }
}