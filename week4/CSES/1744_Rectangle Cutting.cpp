#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    vector<vector<int>> dp(a,vector<int>(b,INT_MAX));
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(i==j){
                dp[i][j]=0;
            }
            else {
                for(int k=0;k<i;++k){
                    dp[i][j]=min(dp[i][j],dp[k][j]+dp[i-k-1][j]+1);
                }
                for(int k=0;k<j;++k){
                    dp[i][j]=min(dp[i][j],dp[i][k]+dp[i][j-k-1]+1);
                }
                
            }
        }
    }
    cout<<dp[a-1][b-1];
}
