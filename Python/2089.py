class Solution:
    def targetIndices(self, nums: List[int], target: int) -> List[int]:
        arr = []
        nums.sort()
        for i,n in enumerate(nums):
            if n == target:
                arr.append(i)
        return arr
