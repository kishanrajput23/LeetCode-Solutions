class Solution:
    def arrayStringsAreEqual(self, word1: List[str], word2: List[str]) -> bool:
        ls1 = "".join(word1)
        ls2 = "".join(word2)
        if ls1 == ls2:
            return True
        else:
            return False
