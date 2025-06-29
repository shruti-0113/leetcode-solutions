class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        c=0
        arr=[]
        for i in range (len(nums)):
            nums[i]=str(nums[i])
        for i in range(len(nums)):
            arr.append(len(nums[i])) 
        for i in range(len(arr)):
            if arr[i]%2==0  :
                c+=1
        return c
                # count+=2
        # return count
    
