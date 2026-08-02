class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        S = []
        T = []
        for c in s:
            if c == '#':
                if S != []:
                    S.pop()
            else:
                S.append(c)
        for c in t:
            if c == '#':
                if T != []:
                    T.pop()
            else:
                T.append(c)
        return S == T
