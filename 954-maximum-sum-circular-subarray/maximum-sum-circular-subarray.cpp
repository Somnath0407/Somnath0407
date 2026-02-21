class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalsum=nums[0];
        int bestending=nums[0];
        int badending=nums[0];
        int maxsum=nums[0];
        int minsum=nums[0];
        for(int i=1;i<nums.size();i++){
            totalsum+=nums[i];
            int v1=bestending+nums[i];
            int v2=nums[i];
            bestending=max(v1,v2);
            maxsum=max(maxsum,bestending);
            int v3=badending+nums[i];
            badending=min(v3,v2);
            minsum=min(minsum,badending);
        }
        if(maxsum < 0) return maxsum;
        return max(maxsum,totalsum-minsum);
    }
};