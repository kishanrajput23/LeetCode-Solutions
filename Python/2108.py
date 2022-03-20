class Solution:
    def firstPalindrome(self, words: List[str]) -> str:
        ans = ""
        for i in words:
            if i[::-1] == i:
                ans += i
                break
        return ans
        
