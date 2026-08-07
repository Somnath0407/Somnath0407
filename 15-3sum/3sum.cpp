class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int component=-nums[i];
            int j=nums.size()-1;
            for(int k=i+1;k<j;){
                int sum=nums[k]+nums[j];
                if(component==sum){
                    s.insert({nums[i],nums[j],nums[k]});
                    k++;
                    j--;
                }
               else if(sum < component) {
                    k++;
                }
                else{
                    j--;
                }
            }
        }
        vector<vector<int>>v(s.begin(),s.end());
        return v;
    }
};