class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>mh;
        for(int i=0;i<k;i++){
            mh.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++){
            if(mh.top()>=nums[i]) continue;
            else{
                mh.pop();
                mh.push(nums[i]);
            }
        }
        return mh.top();
    }
};
