class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        a = len(nums)
        b = len(set(nums))
        return True if b < a else False
    
