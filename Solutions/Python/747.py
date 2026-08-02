class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        if len(nums) <= 1:
            return 0
        maxi = max(nums)
        if maxi >= 2 * sorted(nums)[-2]:
            return nums.index(maxi)
        return -1
        
