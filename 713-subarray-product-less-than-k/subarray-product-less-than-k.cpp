class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long long pi=1;
        int ans=0;
        int  left=0;
        if(k<=1) return 0;
        for(int i=0;i<nums.size();i++){
            pi*=nums[i];
            while(pi>=k){
                pi/=nums[left++];
            }
            ans+=i-left+1;
        }
        return ans;
    }
};