#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> app(n);
    vector<int> ho(m);
    for(int i=0;i<n;++i){
        cin>>app[i];
    }
    for(int i=0;i<m;++i){
        cin>>ho[i];
    }
    sort(app.begin(),app.end());
    sort(ho.begin(),ho.end());
    int count=0,i=0,j=0;
    while(i<n && j<m){
        if(abs(app[i]-ho[j])<=k){
            i++;j++;count++;
        }
        else if(app[i]>ho[j]){
            j++;
        }
        else i++;
    }
    cout<<count;
}
