#include<bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long b ,long long m) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%m;
        a = (a * a)%m;
        b >>= 1;
    }
    return res%m;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
    long long a,b,c;
    cin>>a>>b>>c;
    long long modu=1e9+7;
    long long m = binpow(b,c,modu-1);
    long long n= binpow(a,m,modu);
    cout<<n<<endl;
    }
}
