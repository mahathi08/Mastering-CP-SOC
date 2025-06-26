#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long i,n;
    cin >> n;
    int a[2000000];
    for(i=0;i<n;i++) {
        cin >> a[i];
    }
    sort(a, a+n, greater<int>());

    long long x = 1;
    long long sum = 0;
    long long ind = 0;
    long long ans = 0;
    while ( ind < n ) {
        sum += a[ind];
        if ( ind == x-1 ) {
            ans += sum;
            x *= 4;
        }
        ind++;
    }
    cout << ans << "\n";
}
