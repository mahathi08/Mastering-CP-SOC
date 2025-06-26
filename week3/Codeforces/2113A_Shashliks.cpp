#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,a,b,x,y;
        cin>>k>>a>>b>>x>>y;
        if(x>y){
            swap(x,y);
            swap(a,b);
        }
        int count=0;
        if(k>=a){
            count=((k-a+x)/x);
        }
        k-=count*x;
        int c=0;
        if(k>=b){
            c=(k-b+y)/y;
        }
        cout<<count+c<<"\n";
    }
}
