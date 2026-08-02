class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        count = 0
        for i in nums:
            i = str(i)
            if len(i) % 2 == 0:
                count += 1
        return count
