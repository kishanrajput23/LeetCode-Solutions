class Solution:
    def numOfStrings(self, patterns: List[str], word: str) -> int:
        return sum(i in word for i in patterns)
