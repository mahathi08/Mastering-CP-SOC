#include <bits/stdc++.h>
using namespace std;
const long long MOD=1e9+7; 
 
int gcd(int a,int b){
    if(a<b)swap(a,b);
    while(b!=0){
        int t=a;
        a=b;
        b=t%b;
    }
    return a;
}
 
 
long long modpow(long long a, long long b, long long mod) {
    long long res = 1;
    a %= mod;
    while (b > 0) {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
 
 
int main() {
    int n,m;
    cin>>n>>m;
    long long ans=0;
    for (int i = 0; i < n; i++) {
        ans = (ans + modpow(m,gcd(n,i),MOD)) % MOD;
    }
    ans = (ans*modpow(n, MOD-2, MOD))%MOD;
    cout << ans << "\n";
}
