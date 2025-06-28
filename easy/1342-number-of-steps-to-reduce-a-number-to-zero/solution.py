class Solution:
    def numberOfSteps(self, num: int) -> int:
        count1=0
        count2=0
        while num:
            if num%2==0:
                num=num/2
                count1+=1
            else :
                num=num-1
                count2+=1
        return count1+count2   