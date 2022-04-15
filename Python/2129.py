class Solution:
    def capitalizeTitle(self, title: str) -> str:
        k = title.split(" ")
        l = []
        for i in k:
            if len(i) <= 2:
                i = i.lower()
                l.append(i)
            else:
                i = i.lower()
                i = i.capitalize()
                l.append(i)
        return " ".join(map(str, l))