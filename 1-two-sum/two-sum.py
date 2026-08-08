class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mp ={}
        for i in range(len(nums)):
            A=target-nums[i]
            if A in mp:
                return ([mp[A],i])
                break
            mp[nums[i]]=i