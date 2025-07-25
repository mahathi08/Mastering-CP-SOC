#include<bits/stdc++.h>
using namespace std;
 
vector<vector<long long>> dp(1000002,vector<long long>(2));
int const MOD=1e9+7;
void pre(){
    dp[1][0]=1;dp[1][1]=1;
    for(int i=1;i<1000000;i++){
        dp[i][0]=dp[i][0]%MOD;
        dp[i][1]=dp[i][1]%MOD;
        
        dp[i+1][0]=2*dp[i][0]+dp[i][1];
        dp[i+1][1]=4*dp[i][1]+dp[i][0];
    }
}
 
int main(){
    int t;
    cin>>t;
    pre();
    while(t--){
        int n;
        cin>>n;
        cout<<(dp[n][0]+dp[n][1])%MOD<<"\n";
    }
}
 
