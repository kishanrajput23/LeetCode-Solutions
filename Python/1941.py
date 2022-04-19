class Solution:
    def areOccurrencesEqual(self, s: str) -> bool:
        m=s.count(s[0])
        for i in s:
            if s.count(i)!=m: 
                return False
        return True
