class Solution:
    def smallestEvenMultiple(self, n: int) -> int:
        # x=0
        # for i in range(n,(n*2)+1):
        #     if i%2==0 and i>=n:                
        #         for j in range (n+1):
        #             if i%n==j and i<=n*2:
        #                 x=i

        # return x
        if n%2 ==0:
            return n
        else:
            return n*2
        