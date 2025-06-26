#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;

		int a=__builtin_popcount(x);
		if(n<=a){
		    cout<<x<<"\n";
		    continue;
		    
		}
		if(x==0 && n==1){
		    cout<<"-1"<<"\n";
		    continue;
		    }
		if(x==0)
		{
			if((n%2)==0){
			    cout<<n<<"\n";
			    continue;
			    
			}
			else
			{
				cout<<(n+3)<<"\n";
				continue;
			}
		}
		if(x==1)
		{
			if(n%2){
			    cout<<n<<"\n";
			    
			}
			else{
			    cout<<(n+3)<<"\n";
			    
			}
			continue;
		}
		int y=(n-a);
		if(y%2){y++;}
		
		cout<<x+y<<"\n";
	}

}
