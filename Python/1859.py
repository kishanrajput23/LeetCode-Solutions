class Solution:
    def sortSentence(self, s: str) -> str:
        words = s.split()
        ans = [None] * len(words)
        for word in words:
            ans[int(word[-1]) - 1] = word[: -1]
        return ' '.join(ans)
            
