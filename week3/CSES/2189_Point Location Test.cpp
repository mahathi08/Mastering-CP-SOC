#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        long long c = 1LL*(x2-x1)*(y3-y1)-1LL*(y2-y1)*(x3-x1);
 
        if (c == 0)
            cout << "TOUCH" << "\n";
        else if (c > 0)
            cout << "LEFT" << "\n";
        else
            cout << "RIGHT" << "\n";
    }
}
 
