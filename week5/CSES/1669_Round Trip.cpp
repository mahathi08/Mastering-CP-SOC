#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<vector<int>> v;
vector<bool> vis;
vector<int> par;
int start=0,endnode=0;
 
bool dfs(int r,int p){
    vis[r]=true;
    for(int u:v[r]){
        if(u==p)continue;
        if(vis[u]){
            start=u;
            endnode=r;
            return true;
        }
        else {
            par[u]=r;
            if(dfs(u,r)) return true;
        }
    }
    return false;
}
 
int main(){
    cin>>n>>m;
    v.resize(n+1);
    vis.assign(n+1,false);
    par.assign(n+1,0);
    
    while(m--){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            if(dfs(i,0)) break;
        }
    }
    
    
    if(start==0)cout<<"IMPOSSIBLE";
    else {
        vector<int>path;
        path.push_back(start);
        for(int v=endnode;v!=start;v=par[v]){
            path.push_back(v);
        }
        path.push_back(start);
        cout<<path.size()<<"\n";
        for(int i=(int)path.size()-1;i>=0;i--){
            cout<<path[i]<<" ";
        }
    }
}
