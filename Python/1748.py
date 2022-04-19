class Solution:
    def sumOfUnique(self, nums: List[int]) -> int:
        s = list(set(nums))
        total = 0
        for i in s:
            if nums.count(i) == 1:
                total += i
        return total
