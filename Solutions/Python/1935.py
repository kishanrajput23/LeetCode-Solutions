class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        text = text.split()
        length = len(text)
        brokenLetters = list(brokenLetters)
		
        for i in text:
            temp = 0
            for j in i:
                if j in brokenLetters:
                    temp -= 1
                    break
            if temp < 0:
                length -= 1
				
        return length
        
