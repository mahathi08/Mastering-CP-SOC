// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>> v(n+1,vector<int>());
//     vector<int> state(n+1,0);
    
//     while(m--){
//         int a,b;
//         cin>>a>>b;
//         v[a].push_back(b);
//         v[b].push_back(a);
//     }
//     for(int i=1;i<n+1;i++){
//         if(state[i]==0){
//             state[i]=1;
//             for(int r:v[i]){
//                 if(state[r]==0){
//                     state[r]=2;
//                 }
//             }
//         }
//     }
//     for(int i=1;i<n+1;i++){
//         if(state[i]==1){
//             for(int r:v[i]){
//                 if(state[r]==1) {cout<<"IMPOSSIBLE";return 0;}
//             }
//         }
//         else if(state[i]==2){
//             for(int r:v[i]){
//                 if(state[r]==2) {cout<<"IMPOSSIBLE";return 0;}
//             }
//         }
//     }
//     for(int i=1;i<n+1;i++){
//         cout<<state[i]<<" ";
//     }
    
// }
 
 
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n+1,vector<int>());
    vector<int> state(n+1,0);
    
    while(m--){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    for(int i=1;i<n+1;i++){
        if(state[i]==0){
            state[i]=1;
            queue<int> q;
            q.push(i);
            while(!q.empty()){
                int p=q.front();
                q.pop();
                for(int r:v[p]){
                    if(state[p]==1 && state[r]==0){
                        state[r]=2;
                        q.push(r);
                    }
                    else if(state[p]==1 && state[r]==2){
                        continue;
                    }
                    else if(state[p]==1 && state[r]==1){
                        cout<<"IMPOSSIBLE";return 0;
                    }
                    else if(state[p]==2 && state[r]==0){
                        state[r]=1;
                        q.push(r);
                    }
                    else if(state[p]==2 && state[r]==1){
                        continue;
                    }
                    else if(state[p]==2 && state[r]==2){
                        cout<<"IMPOSSIBLE";return 0;
                    }
                    
                }
                
            }
        }
    }
    for(int i=1;i<n+1;i++){
        cout<<state[i]<<" ";
    }
    
}
