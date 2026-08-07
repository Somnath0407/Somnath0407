class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if (nums.size() < 4)
            return {};
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++){
            for(int j=i+1;j<nums.size()-2;j++){
                long long newtarget=(long long)target-(long long)nums[i]-(long long)nums[j];
                int low=j+1,high=nums.size()-1;
                while(low<high){
                    long long sum=(long long)nums[low]+(long long)nums[high];
                    if(newtarget<sum){
                        high--;
                    }
                    else if(newtarget>sum){
                        low++;
                    }
                    else{
                        st.insert({nums[i], nums[j], nums[low], nums[high]});
                        low++,high--;
                    }
                }
            }
        }
        vector<vector<int>>v(st.begin(),st.end());
        return v;
    }
};