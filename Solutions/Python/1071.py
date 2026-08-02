class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        n1 = len(str1)
        n2 = len(str2)        
        if str1 == str2:
            return str1
        
        if str1+str2 != str2+str1:
            return ""

        x = gcd(n1, n2)
        
        if str1[:x] == str2[:x]:
            return str1[:x]
        else:
            return ""
