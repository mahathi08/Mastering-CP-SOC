#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin>>t;
    while(t --){
        int x, y;
        cin>>x>>y;
    
        if(x == y){
            cout<<"-1"<<"\n";
            continue;
        }
        if ((x + y) == (x ^ y)){
            cout << 0 << "\n";
            continue;
        }
        
        if(x < y) swap(x, y);
        
        int c = 1;
        while(c <= x){
             c *= 2;
        }
        cout<<c-x<<"\n";
}
}
 
