scores = input("Enter scores: ").split()
scores = [int(x) for x in scores]

sum_scores = 0

for score in scores:
    sum_scores += score

avg = sum_scores / len(scores)

above_count = 0
below_count = 0

for score in scores:
    if score >= avg:
        above_count += 1
    else:
        below_count += 1

print("Number of scores above or equal to the average:", above_count)
print("Number of scores below the average:", below_count)
