#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        map<int,int> m;
        int mini=INT_MAX;
        
        for(int i=0;i<n;i++){
            if(m.find(v[i])==m.end()){
                m[v[i]]=i;
                continue;
            }
            else{
                mini=min(mini,1+i-m[v[i]]);
                m[v[i]]=i;
            }
    }
    if(mini==INT_MAX){
        cout<<-1<<endl;
    }
    else cout<<mini<<endl;
}
}
