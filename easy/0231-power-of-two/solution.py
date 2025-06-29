class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        # if n<=0:
        #     return false
        # while n%2==0:
        #     n=n//2
        # return n==1
        # flag=0
        while (n>0):
            # print(n)
            if n==1:
                return True
            if n%2==0:
                n=n//2
                # flag+=1
            else:
                return False
        return False