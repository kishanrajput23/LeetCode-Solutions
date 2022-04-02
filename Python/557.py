class Solution:
    def reverseWords(self, s: str) -> str:
        new = s.split(" ")
        k = ""
        for i in new:
            k += i[::-1] + " "
        return k.strip()
