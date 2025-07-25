#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<pair<int,long long>>> v(n + 1);
    while(m--){
        int a,b;
        long long c;
        cin>>a>>b>>c;
        v[a].emplace_back(b,c);
    }
    vector<vector<long long>> cost(n+1,vector<long long>(2,LLONG_MAX));
    priority_queue<tuple<long long,int,int>,vector<tuple<long long,int,int>>,greater<>> pq;
    cost[1][0]=0;
    pq.push({0,1,0});
    while(!pq.empty()){
        auto [c,u,used] = pq.top();
        pq.pop();
        if (c>cost[u][used]) continue;
        for (auto &[v,cc] : v[u]) {
            if (cost[v][used]>c+cc) {
                cost[v][used]=c+cc;
                pq.push({cost[v][used],v,used});
            }
            if (!used && cost[v][1]>c+cc/2) {
                cost[v][1]=c+cc/2;
                pq.push({cost[v][1],v,1});
            }
        }
    }
    cout<<cost[n][1];
}
 
