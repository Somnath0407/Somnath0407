class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.empty()) return;
        int ro=k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+ro);
        reverse(nums.begin()+ro,nums.end());
    }
};