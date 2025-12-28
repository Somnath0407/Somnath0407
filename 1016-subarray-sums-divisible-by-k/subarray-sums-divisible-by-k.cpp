class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
    int total =0,rem;
        unordered_map<int,int>m;
        int prefixsum=0;
        m[0]=1;
        for(int i=0;i<nums.size();i++){
            prefixsum+=nums[i];
            rem=((prefixsum%k)+k)%k;
            if(m.count(rem)){
                total+=m[rem];
                m[rem]++;
            }
            else{
                m[rem]=1;
            }
            
        }
        return total;
    }
};