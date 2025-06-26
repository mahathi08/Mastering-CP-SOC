#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, nm;
    cin >> n >> nm;
    vector<int> v(n);
    vector<int> pos(n+2,-1); 
 
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        pos[v[i]] = i;
    }
 
    int c = 1;
    for (int i = 2; i <= n; ++i) {
        if (pos[i] < pos[i - 1]) c++;
    }
 
    while (nm--) {
       int a, b;
       cin >> a >> b;
        a--; b--;
        int x = v[a];
        int y = v[b];
        set<pair<int, int>> req;
 
        for (int i : {x-1, x, x+1, y-1, y, y+1}) {
            if (1 <= i && i <= n) {
                req.insert({i - 1, i});
            }
        }
        for (auto [i, j] : req) {
            if (i >= 1 && j >= 1 && i <= n && j <= n && pos[i] > pos[j]) c--;
        }
 
        swap(v[a], v[b]);
        swap(pos[x], pos[y]);
        
        for (auto [i, j] : req) {
            if (i >= 1 && j >= 1 && i <= n && j <= n && pos[i] > pos[j]) c++;
        }
        cout << c << '\n';
    }
}
 
 
// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
// 	int n,nm;
// 	cin>>n>>nm;
// 	vector<int> v(n);
// 	map<int,int> m;
// 	m[0]=0;
// 	for(int i=0;i<n;++i){
// 	    cin>>v[i];
// 	    m[v[i]]=i+1;
// 	}
// 	while(nm--){
//     	int a,b;
//     	cin>>a>>b;
//     	swap(m[v[a-1]],m[v[b-1]]);
// 	swap(v[a-1],v[b-1]);
    
//     	long long count=1;
//     	for(int i=1;i<n;++i){
//     	    if(m[i]>m[i+1]){
//     	        count++;
//     	    }
// 	   }
	   
// 	cout<<count<<endl;;
// }
 
// }
 
