names = input("Enter a list of first names separated by space: ").split()

count = 0
for name in names:
    count += name.lower().count('a')

print(f"The letter 'a' appears {count} times in the list of first names.")
