class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        nums = [start + i * 2 for i in range(n)]
        ans = 0
        for i in nums:
            ans = ans ^ i
        return ans
