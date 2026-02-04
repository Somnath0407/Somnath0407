class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,m=0,n=nums.size()-1;
        while(m<=n){
            if(nums[m]==0){
                swap(nums[l++],nums[m++]);
            }
            else if(nums[m]==1){
                nums[m++];
            }
            else{
                swap(nums[m],nums[n--]);
            }
        }
    }
};