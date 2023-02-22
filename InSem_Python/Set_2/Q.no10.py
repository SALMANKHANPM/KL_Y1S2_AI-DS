nums = input("Enter numbers: ").split()
nums = [int(x) for x in nums]

num_count = {}

for num in nums:
    num_count[num] = num_count.get(num, 0) + 1

max_num_count = 0
most_frequent_nums = []

for num, count in num_count.items():
    if count > max_num_count:
        max_num_count = count
        most_frequent_nums = [num]
    elif count == max_num_count:
        most_frequent_nums.append(num)

print("Most frequent numbers:", most_frequent_nums)
