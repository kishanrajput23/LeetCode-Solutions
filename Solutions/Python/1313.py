class Solution:
    def decompressRLElist(self, nums: List[int]) -> List[int]:
        n = len(nums)
        output = []
        for i in range(n//2):
            freq , val = nums[2*i], nums[2*i+1]
            output += [val]*freq
        return output
