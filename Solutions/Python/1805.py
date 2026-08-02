class Solution:
    def numDifferentIntegers(self, word: str) -> int:
        for i in word:
            if not i.isdigit():
                word = word.replace(i, " ")
        k = word.split(" ")
        lst = []
        for i in k:
            if i != '':
                lst.append(int(i))
        return len(set(lst))
