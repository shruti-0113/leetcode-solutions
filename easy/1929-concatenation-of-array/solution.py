class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        # arr=[]
        # for i in range (len(nums)) :
        #     arr.append(0)
        # for i in range (len(nums)) :
        #     arr.append(nums[i])
        
        # return arr
        arr=nums.copy()
         
        for i in range (len(nums)):
            # if arr[i+len(nums)] == nums(i)   :
                arr.append(nums[i])
        return arr