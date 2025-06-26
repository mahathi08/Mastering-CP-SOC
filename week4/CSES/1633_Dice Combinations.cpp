#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main() {
    int n;
    cin>>n;
    vector<long long> v={1,2,4,8,16,32};
    for(int i=6;i<n;i++){
        v[i%6]=(((v[0]+v[1])%MOD+ (v[2]+v[3])%MOD)%MOD +(v[4]+v[5])%MOD)%MOD;
    }
    cout<<v[(n-1)%6];
}
 
