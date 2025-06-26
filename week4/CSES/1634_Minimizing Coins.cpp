#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main() {
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    vector<int> dp(x+1,INT_MAX);
    dp[0]=0;
    for(int i=1;i<=x;i++){
        for(int c:v){
            if(i>=c && dp[i-c] != INT_MAX) dp[i]=min(dp[i],dp[i-c]+1);
        }
    }
    cout << ((dp[x] == INT_MAX) ? -1: dp[x]);
}
