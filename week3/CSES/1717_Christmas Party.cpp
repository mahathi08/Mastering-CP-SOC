#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 10;
 
vector<long long> dearr(MAX);
 
void precompute() {
    dearr[1] = 0;
    dearr[2] = 1;
    for (int i = 3; i < MAX; ++i) {
        dearr[i] = ((i-1)*((dearr[i-1]+dearr[i-2]) % MOD) % MOD);
    }
}
 
long long ans(int n) {
    return dearr[n];
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    precompute();
 
    int n;
    cin >> n;
    cout<<ans(n) ;
}
