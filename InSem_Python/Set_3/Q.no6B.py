
sum = 0
product = 1
count = 0

while True:
    user_input = input("Enter an integer (q to quit): ")
    if user_input == 'q':
        break
    sum += int(user_input)
    product *= int(user_input)
    count += 1

if count:
    print("Average: {} Product: {}".format(sum / count, product))
else:
    print("No numbers entered.")
