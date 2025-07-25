#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<pair<int,long long>>> v(n+1);
    while(m--){
        int a,b,c;
        cin>>a>>b>>c;
        v[a].emplace_back(b,c);
    }
    vector<long long> dist(n+1,LLONG_MAX);
    dist[1]=0;
    priority_queue<pair<long long,int>,vector<pair<long long,int>>,
    greater<>> pq;
    pq.emplace(0,1);
    
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if(d>dist[u]) continue;
        for(auto [uu,dd]:v[u]){
            if(dist[uu]>dist[u]+dd){
                dist[uu]=dist[u]+dd;
                pq.emplace(dist[uu],uu);
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<dist[i]<<" ";
    }
}
