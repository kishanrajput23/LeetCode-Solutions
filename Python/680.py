class Solution:
    def validPalindrome(self, s: str) -> bool:
        if s == s[::-1]:
            return True
        p = len(s) - 1
        for i in range(len(s) // 2):
            if s[i] != s[p]:
                temp1 = s[:i] + s[i+1:]
                temp2 = s[:p] + s[p+1:]
                if temp1 == temp1[::-1] or temp2 == temp2[::-1]:
                    return True
                break
            p -= 1
        return False
                
