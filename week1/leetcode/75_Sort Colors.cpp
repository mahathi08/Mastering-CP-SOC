class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> k(3);
        for(auto x:nums){
            k[x]++;
        }
        nums.clear();
        for(int x=0;x<3;++x){
        while(k[x]--){
            nums.push_back(x);
        }}
    }
};
