#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n+1,vector<int>());
    vector<bool> vis(n+1,false);
    
    while(m--){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    queue<int> q;
    vector<int> par(n+1);
    vector<int> level(n+1);
    q.push(1);
    par[1]=0;
    vis[1]=true;
    level[1]=1;
    while(!q.empty()){
        int p=q.front();
        q.pop();
        for(int r:v[p]){
            if(vis[r]==false){
                vis[r]=true;
                q.push(r);
                par[r]=p;
                level[r]=level[p]+1;
            }
        }
        if(p==n){
            break;
        }
    }
    vector<int> path;
    if(vis[n]==true){
        int node=n;
        path.push_back(n);
        while(par[node]!=0){
            path.push_back(par[node]);
            node=par[node];
        }
        cout<<path.size()<<"\n";
        for(int i=(int)path.size()-1;i>=0;i--){
            cout<<path[i]<<" ";
        }
    }
    else cout<<"IMPOSSIBLE";
    
}
 
