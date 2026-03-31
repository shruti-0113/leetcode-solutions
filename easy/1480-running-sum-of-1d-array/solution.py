class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
      arr1=[]
      arr1.append(nums[0])
      for i in range(1,len(nums)):
        x=nums[i]+arr1[i-1]
        arr1.append(x)  

      return arr1