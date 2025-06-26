#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
     vector<int> x(m+1);
    for(int i=0;i<m+1;i++){
        cin>>x[i];
        x[i] &= (1 << n) - 1;
    }
    int count=0;
    for(int i=0;i<m;i++){
        int ans=x[i]^x[m];
        if(__builtin_popcount(ans)<=k){
            count++;
        }
    }
    cout<<count;
}
