class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        vowels = "aeiouAEIOU"
        mid, ans = len(s) // 2, 0
        for i in range(mid):
            if s[i] in vowels: ans += 1
            if s[mid+i] in vowels: ans -=1
        return ans == 0
