#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<int> neg;
    vector<int> pos;
    vector<int> zero;

    for(int i=0;i<n;i++){
        int a;cin>>a;
        if(a>0) pos.push_back(a);
        else if(a<0) neg.push_back(a);
        else if(a == 0) zero.push_back(a);
    }

    if(neg.size() %2 == 0){
        int temp=neg[neg.size()-1];
        neg.pop_back();
        zero.push_back(temp);
    }
    if(pos.size() == 0){
        int a=neg[neg.size()-1];
        neg.pop_back();
        int b=neg[neg.size()-1];
        neg.pop_back();

        pos.push_back(a);
        pos.push_back(b);
    }

    cout<<neg.size()<<" ";
    for(auto i:neg) cout<<i<<" ";
    cout<<endl;
    cout<<pos.size()<<" ";
    for(auto i:pos) cout<<i<<" ";
    cout<<endl;
    cout<<zero.size()<<" ";
    for(auto i:zero) cout<<i<<" ";
    cout<<endl;
    
}