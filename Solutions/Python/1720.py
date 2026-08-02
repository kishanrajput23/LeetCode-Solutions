class Solution:
    def decode(self, encoded: List[int], first: int) -> List[int]:
        return itertools.accumulate(encoded, operator.xor, initial=first)
