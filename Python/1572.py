class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        n = len(mat)
        mid = n // 2
        total = 0
        for i in range(n):
            total += mat[i][i] + mat[n-1-i][i]
        if n % 2 == 1:
            total -= mat[mid][mid]   
        return total
