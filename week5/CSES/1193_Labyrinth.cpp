#include<bits/stdc++.h>
using namespace std;
 
char ar[1001][1001];
char br[1001][1001];
bool vis[1001][1001];
int n,m;
vector<char> path;
 
bool isvalid(int y,int x){
    if(x<0 || y<0 || x>=m || y>=n || vis[y][x]==true || ar[y][x]=='#') return false;
    return true;
}
 
bool bfs(int y,int x){
    queue<pair<int,int>> q;
    q.push({y,x});
    vis[y][x]=true;
	while(!q.empty()){
    	int a=q.front().first;
    	int b=q.front().second;
    	q.pop();
    	if(ar[a][b] == 'B'){
    		while(true){
    			path.push_back(br[a][b]);
    			if(path.back() == 'L') b++;
    			if(path.back() == 'R') b--;
    			if(path.back() == 'U') a++;
    			if(path.back() == 'D') a--;
    			
    			if(a == y && b == x)
    			break;
    		}
    		return true;
    	}
        if(isvalid(a , b - 1)) {
            br[a][b-1] = 'L' ;
            q.push({a , b-1}) ;
            vis[a][b-1] = true;
        }
    	if(isvalid(a , b + 1)){ 
    	    br[a][b+1] = 'R';
    	    q.push({a , b+1}) ;
    	    vis[a][b+1] = true;
    	}
    	if(isvalid(a - 1, b)){ 
    	    br[a - 1][b] = 'U' ;
        	q.push({a - 1 , b}) ;
        	vis[a-1][b] = true;
    	}
    	if(isvalid(a + 1, b)) 
    	{
    	    br[a + 1][b] = 'D' ;
        	q.push({a + 1 , b}) ;
        	vis[a+1][b] = true;
    	}
    }
    return false;
}
 
int main(){
    cin>>n>>m;
    int x,y;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ar[i][j];
            if(ar[i][j] == 'A') y = i , x = j;
        }
    }
    if(bfs(y , x) == true){
		cout<<"YES"<<"\n"<<path.size()<<"\n";
		while(path.size() > 0) cout<<path.back() , path.pop_back();
	}
	else{
		cout<<"NO";
	}
}
 
 
