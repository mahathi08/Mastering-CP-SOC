#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0)return a;
    else return gcd(b,a%b);
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
     
    int num=a*d-b*c,den;
    if(num>0) den=a*d;
    else {num=-num;
          den=b*c;
    }
    int hcf=gcd(num,den);
    num=num/hcf;
    den=den/hcf;
    cout<<num<<'/'<<den;
    
}
