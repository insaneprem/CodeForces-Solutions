#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long bre = ceil(static_cast<double>(m) / a);
    long long len = ceil(static_cast<double>(n) / a);
    
    cout << bre*len;

    return 0;
}
