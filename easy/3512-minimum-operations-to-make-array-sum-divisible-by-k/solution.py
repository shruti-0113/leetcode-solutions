class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        x=0
        
        for i in range (0,len(nums)):
            x += nums[i]
        return x%k