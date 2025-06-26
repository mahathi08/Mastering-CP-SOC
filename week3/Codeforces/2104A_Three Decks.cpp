#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)%3==0 && (c-2*a+b)%3==0 && (c-2*b+a)%3==0 && (c-2*a+b)>=0 && (c-2*b+a)>=0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
