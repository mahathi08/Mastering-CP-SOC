#include <bits/stdc++.h>
using namespace std;
 
const int MAX = 1e6+6;
int small[MAX]; 
 
void pre_compute() {
    for (int i = 1; i<MAX; i++) small[i] = i;
    for (int i = 2; i*i<MAX; i++) {
        if (small[i] == i) { 
            for (int j = i*i; j<MAX; j += i) {
                if (small[j] == j) {
                    small[j] = i;
                }
            }
        }
    }
}
 
int num(int x) {
    int res = 1;
    while (x > 1) {
        int p = small[x];
        int c = 0;
        while (small[x] == p) {
            x /= p;
            c++;
        }
        res *= (c+1);
    }
    return res;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    pre_compute();
 
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        cout << num(x) << "\n";
    }
}
 
 
// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
 
//     int n;
//     cin >> n;
//     while(n--){
//         int x;
//         cin>>x;
//         int res=1;
//         for(int j=2 ; j<=x ; (j==2) ? j++ :j+=2){
//             int c=0;
//             while(x%j==0){
//                 x=x/j;
//                 c++;
//             }
//             res=res*(c+1);
//         }
//         cout<<res<<"\n";
//     }
    
// }
