#include<bits/stdc++.h>
using namespace std;

int main(){
    int nn,mm;
    cin>>nn>>mm;
    long long n=nn;
    long long m=mm;
    long long kmax=0,kmin=0;
    
    if(n==m){
        kmax=0,kmin=0;
    }
    else{
        kmax=(n+1-m)*(n-m)/2;
        long long a=n/m;
        long long b=n%m;
        kmin=(b*(a+1)*a/2)+((m-b)*a*(a-1)/2);
    }
    cout<<kmin<<" "<<kmax;
}
