class Solution:
    def smallestEqual(self, nums: List[int]) -> int:
        for index, num in enumerate(nums):
            if index % 10 == num:
                return index
        return -1 
