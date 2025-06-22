#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  
    string str;
    cin >> str;  
    
    int jump = 0;
    string ans = "";
    
    for (int i = 0; i < n; i += jump) {
        ans += str[i];
        jump++;
    }
    
    cout << ans << endl;
    return 0;
}
