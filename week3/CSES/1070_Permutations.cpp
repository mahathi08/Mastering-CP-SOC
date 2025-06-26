#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1) cout<<1;
    else if(n<=3)cout<<"NO SOLUTION";
    else{
        vector<int> v(n);
        if(n%2){
            for(int i=0;i<n;i+=2){
                v[i]=(i/2)+1;
            }
            for(int i=1;i<n;i+=2){
                v[i]=(i+3+n)/2;
        }}
        else{
            for(int i=0;i<n;i+=2){
                v[i]=(n+i+2)/2;
            }
            for(int i=1;i<n;i+=2){
                v[i]=(i+1)/2;
            }
        }
        
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
    }
    
}
