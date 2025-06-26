#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	map<int,int> m;
	m[0]=0;
	for(int i=0;i<n;++i){
	    cin>>v[i];
	    m[v[i]]=i;
	}
	long long count=1;
	for(int i=1;i<n;++i){
	    if(m[i]>m[i+1]){
	        count++;
	    }
	}
	cout<<count;
 
}
