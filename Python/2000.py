class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        if ch not in word:
            return word
        n = word.index(ch)
        s1 = word[:n+1]
        s2 = s1[::-1] + word[n+1:]
        return s2
            
