#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<pair<int,long long>>> adj(n+1);
    while(m--){
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].emplace_back(b,c);
    }
    vector<vector<long long>> dist(n+1);
    priority_queue<pair<long long,int>,vector<pair<long long,int>>,
    greater<>> pq;
    pq.emplace(0,1);
    
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if(dist[u].size()>=k) continue;
        dist[u].push_back(d);
        for(auto [uu,dd]:adj[u]){
            pq.emplace(d+dd,uu);
        }
    }
    for(auto d : dist[n]){
        cout<<d<<" ";
    }
}
