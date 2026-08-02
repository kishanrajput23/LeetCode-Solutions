class Solution:
    def isPalindrome(self, x: int) -> bool:
        temp = str(x)[::-1]
        if x < 0:
            return False
        elif x == int(temp):
            return True
        
