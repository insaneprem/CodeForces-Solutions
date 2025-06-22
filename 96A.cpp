#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
   int i=0;
   int j=0;
   bool dan=false;
   while(i<a.size() && j<a.size()){
     while(a[j] == a[i]) j++;
     if(j-i>=7){
        dan=true;
        break;
     }
     i=j;
   }
   cout<<dan ? "YES" : "NO";
}