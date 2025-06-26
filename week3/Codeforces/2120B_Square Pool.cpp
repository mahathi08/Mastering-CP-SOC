#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int count=0;
        while(n--){
            int dx,dy,x,y;
            cin>>dx>>dy>>x>>y;
            if(y==x && dx==dy)count++;
            else if(x+y==s && dx+dy==0)count++;
        }
        cout<<count<<"\n";
    }
}
