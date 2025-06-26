#include "bits/stdc++.h"
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	long long a[11] = {0, 1, 1, 2, 3, 2, 4, 3, 5, 4, 8};
	while (t--) {
		long long n; cin >> n;
		long long ans = 0;
		while (n >= 10) {
			if (n&1 || n%4 == 0) {++ans; --n;}
			else {ans += n/2; n /= 2;}
			if (n&1 || n%4 == 0) --n;
			else n /= 2;
		}
		if (n > 0) ans += a[n];
		cout << ans << '\n';
	}
}
