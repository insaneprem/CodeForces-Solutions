#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, capacity;
    cin >> n >> capacity;
 
    vector<int> fruits(3002,0); 
    for(int i=0;i<n;i++){
        int a, b;
        cin >> a >> b;
        fruits[a] += b;
    }
    
    int total = 0;
    for(int day=1;day<=3001;day++){
       
        int collect = min(capacity, fruits[day-1]);
        total += collect;
 
        
        collect = min(capacity-collect, fruits[day]);
        total += collect;
        fruits[day] -= collect;
    }
 
    cout << total;
 
    return 0;
}
