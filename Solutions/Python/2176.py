class Solution:
    def countPairs(self, nums: List[int], k: int) -> int:
        n = len(nums)
        count = 0
        for i in range(0, n):
            for j in range(i+1, n):
                if (nums[i] == nums[j]) and ((i*j) % k == 0):
                    count += 1
        return count
