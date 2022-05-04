class Solution:
    def removeDigit(self, number: str, digit: str) -> str:
        ans = 0
        for i, num in enumerate(list(number)):
            if num == digit:
                ans = max(ans, int(number[:i]+number[i+1:]))
        
        return str(ans)
