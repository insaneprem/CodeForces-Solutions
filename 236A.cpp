#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string name;
    cin>>name;

    sort(name.begin(),name.end());
    name.erase(unique(name.begin(), name.end()), name.end());
    
    if(name.size() %2 == 1) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER";

    return 0;
}