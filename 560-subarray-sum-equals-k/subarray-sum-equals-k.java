class Solution {
    public int subarraySum(int[] nums, int k) {
        HashMap<Integer,Integer>mp=new HashMap<>();
        int total=0;
        int presum=0;
        mp.put(0,1);
        for(int i=0;i<nums.length;i++){
            presum+=nums[i];
            if(mp.containsKey(presum-k)){
                total+=mp.get(presum-k);
            }
            mp.put(presum,mp.getOrDefault(presum,0)+1);
        }
        return total;
    }
}