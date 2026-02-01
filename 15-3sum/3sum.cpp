class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int complement = -nums[i];
            int j=nums.size()-1;
           for(int k=i+1;k<j;){
                int sum=nums[k]+nums[j];
                if(complement == sum){
                    st.insert({nums[i], nums[k], nums[j]});
                    k++;
                    j--;
                }
                else if(sum < complement) {
                    k++;
                }
                else{
                    j--;
                }
           }
        }
       vector<vector<int>> v(st.begin(), st.end());
        return v;
    }
};