#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	long long target=1;
	vector<int> v(n);
	for(int i=0;i<n;++i){
	    cin>>v[i];
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;++i){
	    if(v[i]<=target){
	        target+=v[i];
	    }
	    else break;
	}
	cout<<target;
}
