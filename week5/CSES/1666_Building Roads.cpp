#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n+1,vector<int>());
    vector<bool> vis(n+1,false);
    // queue<int> q;
    vector<int> comp;
    int i=1;
    while(m--){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    // int node=1;
    // bool pro=true;
    // while(pro){
    //     comp.push_back(node);
    //     q.push(node);
    //     vis[node]=true;
    //     while(!q.empty()){
    //         int p=q.front();
    //         q.pop();
    //         for(int r:v[p]){
    //             if(vis[r]==false){
    //                 vis[r]=true;
    //                 q.push(r);
    //             }
    //         }
    //     }
    //     pro=false;
    //     for(i=1;i<=n;i++){
    //         if(vis[i]==false){ node=i;pro=true;break;}
    //     }
    // }
    
    for(i=1;i<=n;i++){
            if(vis[i]==false){
                comp.push_back(i);
                queue<int> q;
                q.push(i);
                vis[i]=true;
                
                while(!q.empty()){
                int p=q.front(); 
                q.pop();
                for(int r:v[p]){
                    if(vis[r]==false){
                        vis[r]=true;
                        q.push(r);
                    }
                }
            }
            }
        }
 
    cout<<(int)comp.size()-1<<"\n";
    for(int i=0;i<(int)comp.size()-1;i++){
        cout<<comp[i]<<" "<<comp[i+1]<<endl;
    }
    
}
