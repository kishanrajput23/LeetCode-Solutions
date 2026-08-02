class Solution:
    def divideArray(self, nums: List[int]) -> bool:
        st = set()
        for num in nums:
            if num in st:
                st.remove(num)
            else:
                st.add(num)
        return len(st) == 0
