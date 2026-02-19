class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0,res=INT_MAX;
        int sum=0;
        for(int high=0;high<nums.size();high++){
            sum+=nums[high];
            while(sum>=target){
                res=min(res,high-low+1);
                sum-=nums[low];
                low++;
            }
        }
        return res==INT_MAX?0:res;
    }
};