gadgets = ["Mobile", "Laptop", 100, "Camera", 310.28, "Speakers",
           27.00, "Television", 1000, "Laptop Case", "Camera Lens"]

# create separate lists of strings and numbers
strings_list = [item for item in gadgets if isinstance(item, str)]
numbers_list = [item for item in gadgets if isinstance(item, (int, float))]

# sort the strings list in ascending order
strings_list.sort()

# sort the strings list in descending order
strings_list_desc = sorted(strings_list, reverse=True)

# sort the number list from lowest to highest
numbers_list_asc = sorted(numbers_list)

# sort the number list from highest to lowest
numbers_list_desc = sorted(numbers_list, reverse=True)

print("Strings List:", strings_list)
print("Strings List (Descending):", strings_list_desc)
print("Numbers List (Ascending):", numbers_list_asc)
print("Numbers List (Descending):", numbers_list_desc)
