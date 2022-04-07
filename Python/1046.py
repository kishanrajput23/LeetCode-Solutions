class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        while len(stones) > 1: stones.append(stones.pop(stones.index(max(stones))) - stones.pop(stones.index(max(stones))))
        return stones[0]
