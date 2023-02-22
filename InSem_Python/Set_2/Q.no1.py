# Take input from user
x = float(input("Enter the length of side x: "))
y = float(input("Enter the length of side y: "))
z = float(input("Enter the length of side z: "))

# Determine triangle type
if x == y == z:
    print("The triangle is equilateral.")
elif x == y or y == z or x == z:
    print("The triangle is isosceles.")
else:
    print("The triangle is obtuse.")
