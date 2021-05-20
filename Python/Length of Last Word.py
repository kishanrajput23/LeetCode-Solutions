class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        length = 0
        x = s.strip()
        
        for i in range(len(x)):
            if x[i] == " ":
                length = 0
            else:
                length +=1
        
        return length
        