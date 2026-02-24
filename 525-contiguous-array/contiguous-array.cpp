class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int zero=0,one=0;
        int low=0;
        int res=0;
        unordered_map<int,int> mp;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zero++;
            else one++;
            int diff=zero-one;
            if(mp.count(diff)){
                res=max(res,i-mp[diff]);
            }
            else{
                mp[diff]=i;
            }
        }
        return res;
    }
};