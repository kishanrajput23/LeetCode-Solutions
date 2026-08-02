class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        new = ""
        st = s.split(" ")
        for i in range(k):
            new += st[i] + " "
        return new.strip()
