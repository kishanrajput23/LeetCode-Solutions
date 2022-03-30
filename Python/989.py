class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        s = int("".join(map(str, num)))
        total = s + k
        res = [int(x) for x in str(total)]
        return res
