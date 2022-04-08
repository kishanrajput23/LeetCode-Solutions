class Solution:
    def isPalindrome(self, s: str) -> bool:
        l = s.translate(str.maketrans('', '', string.punctuation))
        l = l.replace(" ", "")
        l = l.lower()
        if l == l[::-1]:
            return True
        else:
            return False
