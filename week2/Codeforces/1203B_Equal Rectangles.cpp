#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(4*n);
        for(int i=0;i<4*n;i++){
            cin>>v[i];
        }
        bool found=false;
        long long area=0,area1=0;
        sort(v.begin(),v.end());
        bool invalid=false;
        for (int i = 0; i < 4 * n; i += 2) {
            if (v[i] != v[i + 1]) {
                invalid = true;
                break;
            }
        }
        if (invalid) {
            cout << "NO"<<"\n";
            continue;
        }
        area=1LL*v[0]*v[4*n-1];
        
        for(int i=2;i<2*n;i=i+2){
            area1=1LL*v[i]*v[4*n-i-1];
            if(area!=area1){
                found=true;
                break;
            }
        }
        if(found==true)cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
}
}
