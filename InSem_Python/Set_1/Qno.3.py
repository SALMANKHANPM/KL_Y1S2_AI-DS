import random as rnd

A = int(input("Enter a Initail No : "))
B = int(input("Enter a Final No : "))
print("Both number are used to create a range from x -> y .")

random_num = rnd.randint(A, B)

guess = int(input("Enter your Guessed Number : "))

if random_num == guess:
    print("Yes! Both Guessed the Same . ")
else:
    print("Better Luck Next Time :) ..")
