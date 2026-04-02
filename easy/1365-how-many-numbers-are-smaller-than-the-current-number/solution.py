class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        ls = []
        for i in range(len(nums)):
            ca = 0
            for j in range(len(nums)):
                if nums [i] > nums [j]:
                    ca += 1
            ls.append(ca)
        return ls