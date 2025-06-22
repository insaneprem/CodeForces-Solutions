#include <bits/stdc++.h> 
using namespace std;
int main(){
   int a;
   cin>>a;
   
   string str;
   cin>>str;
   
   stack<char> st;
   int ans=0;
   for(auto i:str){
       if(!st.empty() && st.top() == i) ans++;
       else st.push(i);
   }
   
   cout<<ans;
}