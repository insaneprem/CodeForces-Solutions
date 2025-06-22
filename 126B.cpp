#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
const long long p1 = 31;
string str;
vector<long long> occurance;

long long get_hash(const string& str) {
    long long ans = 0;
    for (auto i : str) ans = (ans * p1 + (i - 'a' + 1)) % mod;
    return ans;
}

bool check(long long len) {
    //STRING MATCHING
    long long cnt = 0;
    string p = str.substr(0, len);
    long long h_p = get_hash(p);
    long long h_s = get_hash(str.substr(0, len));
   
    long long p_pow = 1;
    for (long long i = 0; i < len - 1; i++) p_pow = (p1 * p_pow) % mod;

    if (h_s == h_p) cnt++;

    for (long long l = 1, r = len; r < str.size(); l++, r++) {
        long long del = ((str[l-1] - 'a' + 1) * p_pow) % mod;
        long long add = (str[r] - 'a' + 1);
        h_s = (((h_s - del + mod) % mod) * p1 + add) % mod;

        if (h_s == h_p) cnt++;
    }
    
    
    return cnt > 2;
}

void bsonans() {
    long long low = 0;
    long long high = occurance.size() - 1;
    while (high >= low) {
        long long mid = (low + high) >> 1;
        if (check(occurance[mid] )) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (high < 0) {
        cout << "Just a legend";
    } else {
        cout << str.substr(0, occurance[high] );
    }

}

void solve() {
    long long n = str.size();

    vector<long long> hash1(n, 0), pow1(n, 1);
    hash1[0] = (str[0] - 'a' + 1);

    for (long long i = 1; i < n; i++) {
        pow1[i] = (pow1[i - 1] * p1) % mod;
        hash1[i] = (hash1[i - 1] * p1 + (str[i] - 'a' + 1)) % mod;
    }

    for (long long len = 1; len < n; len++) {
        long long hash1prefix = hash1[len - 1];
        long long hash1suffix = (hash1[n - 1] - (hash1[n - 1 - len] * pow1[len]) % mod + mod) % mod;

        if (hash1prefix == hash1suffix) {
            occurance.push_back(len);
        }
    }

    bsonans();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> str;
    solve();
    return 0;
}
