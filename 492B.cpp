#include <bits/stdc++.h>
using namespace std;
bool canCover(double dis,vector<int> &arr,int streetlength){
     double curr_pos=0;

     for(auto i:arr){
        if(i-dis> curr_pos) return false;
        else{
            curr_pos=i+dis;
        }
     }
     return curr_pos>=streetlength;
}
int main(){
    int n,l;
    cin>>n>>l;

    vector<int> arr(n);

    for(int i=0;i<n;i++) cin>>arr[i];

    sort(arr.begin(),arr.end());

    double low=0,high=l,mid;
    const double eps = 1e-9;
    while(high -low >eps){
         mid=(low+high)/2.0;
         if(canCover(mid,arr,l)) high=mid;
         else low=mid; 
    }
    cout << fixed << setprecision(9) << low << endl;
    return 0;
}