class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int resultsum=nums[0]+nums[1]+nums[2];
        int mindiff=INT_MAX;
        for(int i=0;i<nums.size()-2;i++){
            int left=i+1;
            int right=nums.size()-1;
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==target){
                    return target;
                }
                else if(sum<target){
                    left++;
                }
                else{
                    right--;
                }
                int difftotarget=abs(sum-target);
                if(difftotarget<mindiff){
                    resultsum=sum;
                    mindiff=difftotarget;
                }
            }

        }
        return resultsum;
    }
};