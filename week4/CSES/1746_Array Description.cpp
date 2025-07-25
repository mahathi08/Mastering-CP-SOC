#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<vector<int>> dp(n, vector<int>(m + 2, 0));
    if(v[0]==0){
        for(int x=1;x<=m;x++)dp[0][x]=1;
    }
    else dp[0][v[0]]=1;
    for(int i=1;i<n;i++){
        for(int x=1;x<=m;x++){
            if(v[i]==0 || v[i]==x){
                dp[i][x]=((dp[i-1][x]+dp[i-1][x-1])%MOD+dp[i-1][x+1])%MOD;
            }
        }
    }
    int ans=0;
    for(int x=1;x<=m;x++){
        ans=(ans+dp[n-1][x])%MOD;
    }
    
    cout<<ans;
}
