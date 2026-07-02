class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        d={}
        for i in range(len(nums)):
            if nums[i] in d:
                d[nums[i]]+=1
            else:
                d[nums[i]]=1
        # print(d)
        for i,j in d.items():
            if j>1:
                return  True
        return False