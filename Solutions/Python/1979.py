class Solution:
    def findGCD(self, nums: List[int]) -> int:
        com = []
        maxi = max(nums)
        mini = min(nums)
        for i in range(1, maxi+1):
            if maxi%i == 0 and mini%i == 0:
                com.append(i)
        return max(com)
