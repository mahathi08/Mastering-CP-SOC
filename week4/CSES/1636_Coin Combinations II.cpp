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
    
    vector<int> dp(x+1,0);
    dp[0]=1;
    for(int c:v){
        for(int i=c;i<=x;i++){
            if(i>=c) dp[i]=(dp[i]+dp[i-c])%MOD;
        }
    }
    cout <<  dp[x];
}
