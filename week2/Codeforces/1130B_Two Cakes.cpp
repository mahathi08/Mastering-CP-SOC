#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin>>n;
        vector<int> v(2*n);
        map<int,vector<int>> m;
        for(int i=0;i<2*n;i++){
            cin>>v[i];
            m[v[i]].push_back(i);
        }
        int sas_pos=0,sas_pos1=0,sas_pos2=0;
        int das_pos=0,das_pos1=0,das_pos2=0;
        int ans1=0,ans2=0;
        long long ans=0;
        
        for(int i=1;i<=n;i++){
            sas_pos1=m[i][0];
            das_pos1=m[i][1];
            ans1=abs(sas_pos1-sas_pos)+abs(das_pos1-das_pos);
            sas_pos2=m[i][1];
            das_pos2=m[i][0];
            ans2=abs(sas_pos2-sas_pos)+abs(das_pos2-das_pos);
            
            if(ans1<=ans2){
                sas_pos=sas_pos1;
                das_pos=das_pos1;
                ans+=ans1;
            }
            else {
                sas_pos=sas_pos2;
                das_pos=das_pos2;
                ans+=ans2;
            }
        }
        cout<<ans;
}
 
