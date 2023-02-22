
list1 = [12, 15, 32, 42, 55, 75, 122, 132, 150, 180, 200]

for num in list1:
    if num % 5 == 0 and num <= 150:
        print(num)
    elif num > 150:
        break
