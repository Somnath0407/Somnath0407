class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int presum=0;
        int total=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            presum+=nums[i];
            if(mp.count(presum-k)){
                total+=mp[presum-k];
                mp[presum]++;
            }
            else{
                mp[presum]++;
            }
        }
        return total;
    }
};