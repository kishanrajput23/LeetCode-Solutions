class Solution:
    def calPoints(self, ops: List[str]) -> int:
        new  = []
        for i in ops:
            if i == "C":
                new.pop()
            elif i == "D":
                new.append(2 * new[-1])
            elif i == "+":
                new.append(new[-1] + new[-2])
            else:
                new.append(int(i))
        return sum(new)
                
