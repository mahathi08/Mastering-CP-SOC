class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int bef=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]>bef){
                ans+=prices[i]-bef;
                bef=prices[i];
            }
            else bef=min(bef,prices[i]);
        }
        return ans;
    }
};
