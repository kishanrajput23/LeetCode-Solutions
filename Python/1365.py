class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        lst = []
        count = 0
        for i in nums:
            for j in nums:
                if i > j:
                    count += 1
            lst.append(count)
            count = 0
        return lst
