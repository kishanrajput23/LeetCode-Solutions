class Solution:
    def firstUniqChar(self, s: str) -> int:
        d = {}
        for l in s:
            if l not in d: d[l] = 1
            else: d[l] += 1
        for i in range(len(s)):
            if d[s[i]] == 1:
                return i 
        return -1 