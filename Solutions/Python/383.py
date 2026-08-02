class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        return all(ransomNote.count(c)<=magazine.count(c) for c in string.ascii_lowercase)
