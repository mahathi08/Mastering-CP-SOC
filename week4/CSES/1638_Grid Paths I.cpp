#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main() {
    int n;
    cin>>n;
    
    vector<string> g(n);
    for (int i = 0; i < n; ++i){ 
        cin >> g[i];
    }
 
    vector<vector<int>> dp(n, vector<int>(n, 0));
 
    if (g[0][0] == '.') dp[0][0] = 1;
 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (g[i][j] == '*') continue;
            if (i > 0) dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
            if (j > 0) dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
        }
    }
    cout << dp[n - 1][n - 1] << endl;
}
 
 
