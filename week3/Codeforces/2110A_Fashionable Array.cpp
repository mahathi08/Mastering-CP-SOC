#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        int scount = 0;
        for(int i = 0; i < n; ++i){
            if((arr[i] + arr[n - 1]) % 2 == 1)
                scount++;
            else
                break;
        }

        int ecount = 0;
        for(int i = n - 1; i >= 0; --i){
            if((arr[i] + arr[0]) % 2 == 1)
                ecount++;
            else
                break;
        }

        cout << min(scount, ecount) << endl;
    }
    return 0;
}
