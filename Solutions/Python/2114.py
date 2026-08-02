class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        lst = []
        for i in sentences:
            count = len(i.split(" "))
            lst.append(count)
        return max(lst)
