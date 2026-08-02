class Solution:
    def isThree(self, n: int) -> bool:
        if n <= 3:
            return False
        count = 0
        for i in range(2,n//2 + 1):
            if n % i == 0:
                count += 1
            if count > 1:
                return False
        if count == 0:
            return False
        return True
