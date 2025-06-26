#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    int sum=0;
    for(int i=0;i<n;++i){
        cin>>v[i];
        sum+=v[i];
    }
    
    sort(v.begin(),v.end());
    int pre=0;
    for(int i=0;i<n;++i){
        pre+=v[n-1-i];
        if(pre>sum-pre){
            cout<<i+1;
            break;
        }
    }
}
