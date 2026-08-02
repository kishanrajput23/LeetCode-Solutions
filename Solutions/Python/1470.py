class Solution(object):
    def shuffle(self, nums, n):
        """
        :type nums: List[int]
        :type n: int
        :rtype: List[int]
        """
        lst1 = nums[0:n]
        lst2 = nums[n:2*n]
        index=1
        for i in lst2:
            lst1.insert(index, i)
            index+=2
            
        return lst1
