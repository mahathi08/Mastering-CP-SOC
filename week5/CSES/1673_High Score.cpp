#include<bits/stdc++.h>
using namespace std;
// Bellman-Ford
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n+1);
    vector<tuple<int,int,long long>>edges;
    while(m--){
        int a,b;
        long long c;
        cin>>a>>b>>c;
        edges.push_back({a,b,-c});
        adj[a].push_back(b);
    }
    vector<long long> dist(n+1,LLONG_MAX);
    dist[1] = 0;
    vector<int> upd;
    
    for(int i=1;i<=n;++i){
        for(auto [a,b,c] : edges){
            if(dist[a]<LLONG_MAX && dist[a]+c<dist[b]){
                dist[b]=dist[a]+c;
                if(i==n) upd.push_back(b); 
            }
        }
    }
    vector<bool> visited(n+1,false);
    queue<int> q;
    for (int u : upd) {
        q.push(u);
        visited[u]=true;
    }
 
    while(!q.empty()){
        int u=q.front(); q.pop();
        for(int v : adj[u]){
            if(!visited[v]){
                visited[v]=true;
                q.push(v);
            }
        }
    }
    if(visited[n]){
        cout<<-1<<"\n"; 
    }else{
        cout<<-dist[n]<<"\n";
    }
 
}
 
