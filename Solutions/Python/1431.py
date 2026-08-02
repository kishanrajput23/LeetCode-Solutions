class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        maxofcandies=max(candies)
        greatest_candies=[]
        for i in candies:
            if i+extraCandies >= maxofcandies:
                greatest_candies.append(True)
            else:
                greatest_candies.append(False)
        return greatest_candies
        
