class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<int>v;
        int count=(nums.size()/3);
        for(auto &it:mp){
            if(it.second>count){
                v.push_back(it.first);
            }
        }
        return v;
    }
};