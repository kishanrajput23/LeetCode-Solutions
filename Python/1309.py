class Solution:
    def freqAlphabets(self, s: str) -> str:
        size = len(s)
        result = ""
        i = 0
        while i<size:
            if (i < size-2) and (s[i+2] == '#'):
                result += chr(int(s[i:i+2])+96)
                i += 3
            else:
                result += chr(int(s[i])+96)
                i += 1
        return result
