#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
vector<int> segTree;
int mergeor(int a,int b){
    return a | b;
}
int mergexor(int a,int b){
    return a ^ b;
}
bool powercheck(int depth){
    return depth % 2 == 1;
}
void build(vector<int> &arr, int start, int end, int index, int depth){ 
    if(start == end){
        segTree[index] = arr[start];
        return;
    }

    int mid = (start + end) / 2;
    build(arr, start, mid, 2 * index, depth + 1);
    build(arr, mid + 1, end, 2 * index + 1, depth + 1);


    if(powercheck(depth)) 
        segTree[index] = mergeor(segTree[2 * index], segTree[2 * index + 1]);
    else 
        segTree[index] = mergexor(segTree[2 * index], segTree[2 * index + 1]);
}


void update(vector<int> &arr, int start, int end, int index, int pos, int val, int depth){ 
    if(start == end){
        arr[pos] = val;
        segTree[index] = arr[pos];
        return;
    }

    int mid = (start + end) / 2;
    if(pos <= mid)
        update(arr, start, mid, 2 * index, pos, val, depth + 1);
    else
        update(arr, mid + 1, end, 2 * index + 1, pos, val, depth + 1);

    if(powercheck(depth)) 
        segTree[index] = mergeor(segTree[2 * index], segTree[2 * index + 1]);
    else 
        segTree[index] = mergexor(segTree[2 * index], segTree[2 * index + 1]);
} 


void solve(){ 
    int n, q;
    cin >> n >> q;
    int size = (1LL << n);  
    int depth=(n%2 == 1)  ? 1 : 0;

    vector<int> arr(size + 1);
    segTree.resize(2 * size);

    for(int i = 1; i <= size; i++) 
        cin >> arr[i];

    build(arr, 1, size, 1, depth);
    
    while(q--){
        int pos, val;
        cin >> pos >> val;

        update(arr, 1, size, 1, pos, val, depth);
        cout << segTree[1] << "\n";  
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