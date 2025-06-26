#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        map<int,int> m;
        for(int i=0;i<n;++i){
            cin>>v[i];
            if(v[i]%k!=0) m[v[i]%k]++;
        }
        long long max_val = 0, max_idx = 0;
        for (auto [i, j] : m) {
            if (j > max_val) {
                max_val = j;
                max_idx = i;
            }
        }
        if(max_val==0) cout<<0<<'\n';
        else {
            long long ans=((max_val-1LL)*k)+1+(k-max_idx);
            cout<<ans<<'\n';
        }
    }
}
