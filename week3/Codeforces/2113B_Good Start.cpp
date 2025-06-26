#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int w,h,a,b,x1,y1,x2,y2;
        cin>>w>>h>>a>>b>>x1>>y1>>x2>>y2;
        int i1=(x1%a+a)%a,i2=(x2%a+a)%a,j1=(y1%b+b)%b,j2=(y2%b+b)%b;
        bool v=(i1==i2) && (x1!=x2);
        bool u=(j1==j2) && (y1!=y2);
        cout << ((v || u) ? "YES" : "NO") << "\n";
    }
}
