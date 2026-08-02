class Solution:
    def countMatches(self, items: List[List[str]], ruleKey: str, ruleValue: str) -> int:
        count = 0
        a = ["type", "color", "name"]
        x = a.index(ruleKey)
        for i in range(len(items)):
            if ruleValue == items[i][x]:
                count += 1
        return count
