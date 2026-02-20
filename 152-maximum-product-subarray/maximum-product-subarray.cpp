class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int bestending = nums[0];
        int badengind = nums[0];
        int res = nums[0];

        for(int i = 1; i < nums.size(); i++){
            
            int product = nums[i] * bestending;
            int pro = nums[i] * badengind;
            int orginal = nums[i];

            int prevBest = bestending;
            int prevBad = badengind;

            bestending = max(orginal, max(product, pro));
            badengind = min(orginal, min(product, pro));

            res = max(res, bestending);
        }
        return res;
    }
};