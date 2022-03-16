class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        maxi = 0
        for i in range(len(accounts)):
            total = 0
            for j in range(len(accounts[i])):
                total += accounts[i][j]
            maxi = max(total, maxi)
        return maxi
