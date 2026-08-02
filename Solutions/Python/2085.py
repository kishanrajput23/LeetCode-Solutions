class Solution:
    def countWords(self, words1: List[str], words2: List[str]) -> int:
        c1=Counter(words1)
        c2=Counter(words2)
        c=0
        for i in words1:
            if i in words2 and c1[i]==c2[i]==1:
                c+=1
        return c
