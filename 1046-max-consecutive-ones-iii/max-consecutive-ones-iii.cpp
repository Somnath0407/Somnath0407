class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low=0,res=0,zc=0;
        for(int high=0;high<nums.size();high++){
            if(nums[high]==0) zc++;
            while(zc>k){
                if(nums[low]==0) zc--;
                low++;
            }
            res=max(res,high-low+1);
        }
        return res;
    }
};