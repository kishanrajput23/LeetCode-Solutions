class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        x = len(image)
        y = len(image[0])
        for i in range(x):
            image[i] = image[i][::-1]
            for j in range(y):
                image[i][j] = abs(image[i][j] - 1)
        return image
