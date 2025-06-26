#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        for(int i=0;i<n;++i){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<k;++i){
            if(a[i]<b[n-1-i]){
                swap(a[i],b[n-1-i]);
            }
        }
        int sum=0;
        for(int i:a){
            sum+=i;
        }
        cout<<sum<<'\n';
    }
}
