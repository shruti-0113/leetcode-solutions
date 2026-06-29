class Solution:
    def maxDistinct(self, s: str) -> int:
        x= set(s)
        return len(x)