#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    string str;
    cin >> str;
    
    int n = str.size();
    vector<vector<int>> arr; 
    stack<int> zero, one;

    for(int i = 0; i < n; i++){
        if(str[i] == '0'){
            if(one.empty()){
                arr.push_back({i+1});
                zero.push(arr.size() - 1);
            } else {
                int ind = one.top();
                one.pop();
                arr[ind].push_back(i+1);
                zero.push(ind);
            }
        } else {
            if(zero.empty()){
                cout << -1;
                return;
            } else {
                int ind = zero.top();
                zero.pop();
                arr[ind].push_back(i+1);
                one.push(ind);
            }
        }
    }

    if(!one.empty()){
        cout << -1;
        return;
    }

    cout << arr.size() << '\n';
    
    
    for(auto &i : arr){
        cout << i.size() << " ";
        for(auto &j : i) cout << j << " ";
        cout << '\n';
    }
}


signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // cout.tie(NULL);

    solve();
}