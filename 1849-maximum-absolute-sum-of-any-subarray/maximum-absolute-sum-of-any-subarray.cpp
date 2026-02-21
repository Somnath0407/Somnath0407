class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int res=abs(nums[0]);
        int maxsum=nums[0];
        int minsum=nums[0];
        int bestending=nums[0];
        int bedending=nums[0];
        for(int i=1;i<nums.size();i++){
            int v1=bestending+nums[i];
            int v2=nums[i];
            bestending=max(v1,v2);
            maxsum=max(maxsum,bestending);
            int v3=bedending+nums[i];
            bedending=min(v3,v2);
            minsum=min(minsum,bedending);
            res=max(res,{max(abs(minsum),abs(maxsum))});
        }
        return res;
    }
};