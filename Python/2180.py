class Solution:
    def countEven(self, num: int) -> int:
        count = 0
        for i in range(num+1):
            total = sum(int(digit) for digit in str(i)) 
            if total % 2 == 0 and total != 0:
                count += 1
        return count