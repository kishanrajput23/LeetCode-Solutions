class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        if m==0:
            nums1[:]=nums2
        elif n==0:
            nums1[:]=nums1
        else:
            nums1[:]=nums1[0:m]+nums2[0:n]
        nums1.sort()
        
