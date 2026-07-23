class Solution {
public:
    int fun(vector<int>& nums, vector<vector<int>>& dp, int i, int prev) {
        if (i == nums.size()) return 0;

        if (dp[i][prev + 1] != -1)
            return dp[i][prev + 1];

        if (prev == -1 || nums[i] > nums[prev]) {
            int take = 1 + fun(nums, dp, i + 1, i);
            int notTake = fun(nums, dp, i + 1, prev);
            return dp[i][prev + 1] = max(take, notTake);
        }

        return dp[i][prev + 1] = fun(nums, dp, i + 1, prev);
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        return fun(nums, dp, 0, -1);
    }
};