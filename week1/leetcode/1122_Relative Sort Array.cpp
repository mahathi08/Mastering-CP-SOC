class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int freq[1001] = {0};
        for (auto x:arr1) ++freq[x];
        int i = 0;
        for (auto y:arr2) {
            while (freq[y]-- > 0) arr1[i++] = y;
        }
        for (int num = 0; num <= 1000; ++num) {
            while (freq[num]-- > 0) arr1[i++] = num;
        }
        return arr1;
    }
};
