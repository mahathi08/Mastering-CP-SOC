#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 1e9 + 7;
const int MAX = 2e6 + 10;
 
vector<long long> fact(MAX), inv_fact(MAX);
 
long long modpow(long long a, long long b) {
    long long res = 1;
    a %= MOD;
    while (b > 0) {
        if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}
 
void precompute() {
    fact[0] = 1;
    for (int i = 1; i < MAX; ++i) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
 
    inv_fact[MAX - 1] = modpow(fact[MAX - 1], MOD - 2);
    for (int i = MAX - 2; i >= 0; --i) {
        inv_fact[i] = (inv_fact[i + 1] * (i + 1)) % MOD;
    }
}
 
long long binomial(int a, int b) {
    if (b < 0 || b > a) return 0;
    return ((((fact[a] * inv_fact[b]) % MOD )* inv_fact[a - b]) % MOD);
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    precompute();
 
    int n,m;
    cin >> n >> m;
    cout<<binomial(m+n-1,m) % MOD ;
}
