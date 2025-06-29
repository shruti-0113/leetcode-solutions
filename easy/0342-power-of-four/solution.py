class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        while(n>0):
            if n==1:
                return True
            if n%4==0:
                n=n//4
            else:
                return False
        return False