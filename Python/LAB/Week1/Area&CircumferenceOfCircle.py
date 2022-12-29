# 1. Write a python program to find the area and circumference of a circle (radius r as input) .
#######
r = float(input("Enter the Radius Of Circle : "))

area = 3.14 * (r ** 2)
circumference = 2 * 3.14 * r

print(f"The Area Of the Circle is : {area}\nThe Circumference of the Circle is : {round(circumference, 2)}")