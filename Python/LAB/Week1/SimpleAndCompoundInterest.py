# Write a Python Program to calculate Simple Interest and Compound Interest.
#########
####Simple Interest####
p = float(input("Enter the Principal Amount : "))
r = float(input("Enter the Rate of Interest : "))
t = float(input("Enter the Time in Years : "))

A_SI =  p * ( 1 + r*t)

print(f"The Value of Simple Interest is : {A_SI}")


####Compound Interest####
p = float(input("Enter the Principal Amount : "))
r = float(input("Enter the Rate of Interest : "))
n  = float(input("Enter No. of times the Interest applied per time period : "))
t = float(input("Enter the Time in Years : "))

A_CI =  p * (1 + ( r / n)) ** (n * t)

print(f"The Value of Compound Interest is  : {round(A_CI, 3)}")

