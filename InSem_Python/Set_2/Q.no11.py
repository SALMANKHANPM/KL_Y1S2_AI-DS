
class Rectangle:
    def __init__(self, width=1, height=2):
        self.width = width
        self.height = height

    def getArea(self):
        return self.width * self.height

    def getPerimeter(self):
        return 2 * (self.width + self.height)


rect1 = Rectangle(4, 40)
rect2 = Rectangle(3.5, 35.7)

print("Rectangle 1")
print("Width:", rect1.width)
print("Height:", rect1.height)
print("Area:", rect1.getArea())
print("Perimeter:", rect1.getPerimeter())

print("Rectangle 2")
print("Width:", rect2.width)
print("Height:", rect2.height)
print("Area:", rect2.getArea())
print("Perimeter:", rect2.getPerimeter())
