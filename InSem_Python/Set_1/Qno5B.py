numAsStr = input("Enter a Number : ")
sum = 0

for i in range(len(numAsStr)):
    sum = sum + pow(int(numAsStr[i]), i + 1)

print(sum)
