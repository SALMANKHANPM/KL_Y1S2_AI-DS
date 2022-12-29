# Compute the growth of money in a bank. Let p be a bank's interest rate in percent per year. An initial amount A has then grown to after n years. Make a program for computing how much money 100000 Rupees have grown to after three years with 5 percent interest rate.
########

a = float(input("Enter the initial Amount : "))
p = float(input("Enter the Bank's Interest Rate per Year : "))
n = float(input("Enter the Total No. of Years Invested : "))

interestRate = a * (1 + ( p/ 100)) ** n

print(f"The Amount after {n} years is : {round(interestRate, 2)}")