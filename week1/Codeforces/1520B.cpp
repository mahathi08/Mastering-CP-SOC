#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int p;
        cin>>p;
        int digits=0;
        int k=p;
        while(k>0){
            digits++;
            k=k/10;
        }
        if(digits==1){
            cout<<p<<'\n';
            continue;
        }
        
        int s=digits-1;
        int n=(p/int(pow(10,s)))*int(pow(10,s));
        int h=0;
        for(int i=0;i<s;++i){
            h+=(p/int(pow(10,s)))*int((pow(10,i)));
        }
        
        int ans=9*s+(p/int(pow(10,s)))-1;
        if(p-n >=h){
            ans++;
        }
        // cout<<h<<" "<<n<<" ";
        cout<<ans<<'\n';
        
        
    }
}
