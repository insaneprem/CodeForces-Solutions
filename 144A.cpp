#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minind=-1;
    int mini=1e9;

    int maxind=-1;
    int maxi=-1e9;

    for(int i=0;i<n;i++){
        if(mini>=arr[i]){
            mini=arr[i];
            minind=i;
        }
        if(maxi<arr[i]){
            maxi=arr[i];
            maxind=i;
        }
    }

    int ans=maxind+(n-1-minind);

    if(maxind>minind) cout<<ans-1;
    else cout<<ans;



    return 0;
}
