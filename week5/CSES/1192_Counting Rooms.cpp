#include<bits/stdc++.h>
using namespace std;
 
char arr[1001][1001];
bool vis[1001][1001];
 
bool isvalid(int y,int x,int n,int m){
    if(x<0 || y<0 || x>=m || y>=n || vis[y][x]==true || arr[y][x]=='#') return false;
    return true;
}
 
void dfs(int y,int x,int n,int m){
    vis[y][x]=true;
    if(isvalid(y+1,x,n,m)) dfs(y+1,x,n,m);
    if(isvalid(y,x+1,n,m)) dfs(y,x+1,n,m);
    if(isvalid(y-1,x,n,m)) dfs(y-1,x,n,m);
    if(isvalid(y,x-1,n,m)) dfs(y,x-1,n,m);
}
 
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]=='.' && vis[i][j]==false){
                dfs(i,j,n,m);
                count++;
            }
        }
    }
    cout<<count;
}
