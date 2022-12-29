# Write a Python Program to find the area and circumference of a rectangle (input length and width)
########
length = float(input("Enter the Length of a Rectangle : "))
width = float(input("Enter the Width of a Rectangle : "))

area = length * width
circumference =  2 * (length + width)

print(f"The area of the Rectangle is : {area}\nThe Circumference of the Rectangle is : {circumference}")