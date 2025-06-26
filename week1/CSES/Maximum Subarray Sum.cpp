#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> app(n);
    for(int i=0;i<n;++i){
        cin>>app[i];
    }
    long long cur=0;long long maxi=app[0];
    for(int i=0;i<n;++i){
        cur+=app[i];
	maxi=max(maxi,cur);
        if(cur<0)cur=0;
    }
    cout<<maxi;
}
