# https://leetcode.com/problems/two-sum/
# Approach: One-pass hash map — store each number's index as we go,
# check if the complement (target - num) was seen before.
# Time: O(n) | Space: O(n)

from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in seen:
                return [seen[complement], i]
            seen[num] = i
        return []
