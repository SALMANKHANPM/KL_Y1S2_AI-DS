# Write a Python program that calculates and prints the value according to the given formula: Q = Square root of [(2 * C * D)/H]. Following are the fixed values of C and H: C is 50. H is 30. D is the variable whose values should be input to your program. 
##########
import math as m

c, h = 50, 30
d =  float(input("Enter the Value for D : "))

q = m.sqrt((2 * c * d) / h)

print(f"The Output is : {int(q)}")
