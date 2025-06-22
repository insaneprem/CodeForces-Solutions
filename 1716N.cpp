#include <bits/stdc++.h>
using namespace std;
void solve(){
    string str;
    
    int n=str.size();
    int k;
    cin>>k;

    int l=0;
    int ind=0;
    int step=k+1;
    while(l<n && step--){
         if(str[l]<str[ind] && (str[l] !='0')) ind=l;
         l++;
    }

    step=k-ind;

    string temp;
    temp=str[ind];
    for(int i=ind+1;i<n;i++){
        while(step>0 && temp.size()>1 && temp.back()>str[i]){
            temp.pop_back();
            step--;
        }

        temp+=str[i];
    }
    
    while(step--) temp.pop_back();
    cout<<temp<<'\n';

}
int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--) solve();
}