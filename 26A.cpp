#include <bits/stdc++.h>
using namespace std;

bool isAlmostPrime(int n) {
    int primeFactorCount = 0;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            primeFactorCount++;
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    if (n > 1) { 
        primeFactorCount++;
    }
    return primeFactorCount == 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 2; i <= n; ++i) {
        if (isAlmostPrime(i)) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
