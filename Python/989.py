class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        total = int("".join(map(str, num))) + k
        res = list(map(int, str(total)))
        return res
