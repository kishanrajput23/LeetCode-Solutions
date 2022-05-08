class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        return len(set(zip(s, t))) == len(set(s)) and len(set(zip(t, s))) == len(set(t))
