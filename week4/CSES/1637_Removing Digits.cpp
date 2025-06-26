#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main() {
    int n;
    cin>>n;
    
    vector<int> dp(n+1,INT_MAX);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        for(auto c: to_string(i)){
            int digit = c - '0';
            if (digit > 0 && i - digit >= 0)
                dp[i] = min(dp[i], dp[i - digit] + 1);
        }
    }
 
    cout <<  dp[n];
}
