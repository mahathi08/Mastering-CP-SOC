class Solution {
public:
    int maxVowels(string s, int k) {
        int vowels[26] = {1,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0};
        int maxi = 0;
        int curr=0;
        for (auto i = 0; i < s.size(); ++i) {
            curr += vowels[s[i] - 'a'];
            if (i >= k)
                curr -= vowels[s[i - k] - 'a'];
            maxi = max(maxi, curr);
        }
        return maxi;
        }
};
