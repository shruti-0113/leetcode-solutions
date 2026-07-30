class Solution:
    def minimumPushes(self, word: str) -> int:
        d={}
        c=1
        for i in range(len(word)):
            if i>0 and i%8==0:
                c+=1
            d[word[i]]=c
        ans =0
        for char in word:
            ans+=d[char]
        print(d)
        return ans