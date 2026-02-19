class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestending=nums[0],ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int sum=bestending+nums[i];
            int v2=nums[i];
            bestending=max(sum,v2);
            ans=max(ans,bestending);
        }
        return ans;
    }
};