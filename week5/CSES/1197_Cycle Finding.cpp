#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
    vector<tuple<int,int,long long>> adj;
    while(m--){
        int a,b;
        long long c;
        cin>>a>>b>>c;
        adj.push_back({a,b,c});
    }
    vector<long long> dist(n+1,0);
    vector<int> par(n+1,-1);
    int las=-1;
    // Bellman-Ford
    for(int i=1;i<=n;i++){
        las=-1;
        for(auto [u,v,w]:adj){
            if(dist[u]+w<dist[v]){
                dist[v]=dist[u]+w;
                par[v]=u;
                las=v;
            }
        }
    }
    if(las==-1){
        cout<<"NO";
    }
    else{
        cout<<"YES"<<"\n";
        int x=las;
        for(int i=0;i<n;i++){
            x=par[x];
        }
        vector<int> path;
        int cur=x;
        do{
            path.push_back(cur);
            if(cur==par[cur]) break;
            cur=par[cur];
        } while (cur!=x || path.size()<=1);
            path.push_back(x);
        reverse(path.begin(),path.end());
        for (int node : path)
            cout<<node<<" ";
        cout<<"\n";
    }
    
}
 
