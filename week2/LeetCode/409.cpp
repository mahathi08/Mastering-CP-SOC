class Solution {
public:
    int longestPalindrome(string s) {
       map<char,int> m;
       for(int i=0;i<s.size();i++){
        m[s[i]]++;
       } 
       int sum=0;
       bool found=false;
       for(auto [a,b]:m){
        if(b%2==0) sum+=b;
        else{ found=true;sum+=b-1;}
       }

       if(found) return sum+1;
       else return sum;
    }
};
