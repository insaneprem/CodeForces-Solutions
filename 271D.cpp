#include <bits/stdc++.h>
using namespace std;

const long long p1 = 31;
const long long p2 = 37;
const long long mod1 = 1e9 + 7;
const long long mod2 = 1e9 + 9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    int n = s.size();

    string isBad;
    cin >> isBad;

    int k;
    cin >> k;

    set<pair<long long, long long>> st; 
    vector<long long> prefixHash1(n, 0), prefixHash2(n, 0);
    vector<long long> power1(n, 1), power2(n, 1);


    prefixHash1[0] = prefixHash2[0] = (s[0] - 'a' + 1);
    for (int i = 1; i < n; i++) {
        power1[i] = (power1[i - 1] * p1) % mod1;
        power2[i] = (power2[i - 1] * p2) % mod2;

        prefixHash1[i] = (prefixHash1[i - 1] * p1 + (s[i] - 'a' + 1)) % mod1;
        prefixHash2[i] = (prefixHash2[i - 1] * p2 + (s[i] - 'a' + 1)) % mod2;
    }


    for (int i = 0; i < n; i++) {
        int nb = 0; // Number of bad characters
        for (int j = i; j < n; j++) {
            if (isBad[s[j] - 'a'] == '0') nb++;
            if (nb > k) break;

            long long hash1 = prefixHash1[j];
            long long hash2 = prefixHash2[j];
            
            if (i > 0) {
                hash1 = (hash1 - (prefixHash1[i - 1] * power1[j - i + 1]) % mod1 + mod1) % mod1;
                hash2 = (hash2 - (prefixHash2[i - 1] * power2[j - i + 1]) % mod2 + mod2) % mod2;
            }

            st.insert({hash1, hash2});
        }
    }

    cout << st.size() << endl;

    return 0;
}