class Solution:
    def largestPerimeter(self, nums: List[int]) -> int:
        nums.sort(reverse = True)
        for i in range(3,len(nums)+1):
            if(nums[i-3] < nums[i-2] + nums[i-1]):
                return sum(nums[i-3:i])
        return 0
