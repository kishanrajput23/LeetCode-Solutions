class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        count = 0
        for i in nums:
            if i != val:
                nums[count] = i
                count += 1
        return count
