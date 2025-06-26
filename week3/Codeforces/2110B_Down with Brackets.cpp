#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int count = 0;
        bool found = false;

        for(int i = 0; i<s.size()-1; ++i){
            if(s[i]=='(') count++;
            else count--;
            
            if(count==0){ found=true;break;}
        }
        
        if(!found) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
        
    }
    return 0;
}
