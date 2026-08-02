class Solution:
    def findLucky(self, arr: List[int]) -> int:
        s = -1
        a = Counter(arr)
        b = list(set(arr))
        for i in b:
            if i == a[i]:
                s = max(s,i)
        return s
