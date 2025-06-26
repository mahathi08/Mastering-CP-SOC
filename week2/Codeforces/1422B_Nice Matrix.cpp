#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> v[i][j];
         long long ans=0;      
        for (int i = 0; i < (n + 1) / 2; ++i) {
            for (int j = 0; j < (m + 1) / 2; ++j){
                vector<int> va;
                int x1 = i, x2 = n-1-i, y1 = j, y2 = m-1-j;
                va.push_back(v[x1][y1]);
                if(x1 != x2) va.push_back(v[x2][y1]);
                if(y1 != y2) va.push_back(v[x1][y2]);
                if(x1 != x2 && y1 != y2) va.push_back(v[x2][y2]);
                sort(va.begin(),va.end());
                int median = va[va.size()/2];
                for (int val : va) {
                    ans += abs(val - median);
                }
            }
    }
    cout<<ans<<endl;
}
}
