#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin>>t;
    while(t --){
        int x; 
        cin >> x;
        int a= 1;
        while (a <= x) a <<= 1;
        a >>= 1;
        if (x - a== 0 || x - a -a + 1 == 0) cout << -1<<"\n";
        else cout << a - 1<<"\n";
}
}
 
