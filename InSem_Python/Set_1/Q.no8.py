gadgets = ["Mobile", "Laptop", 100, "Camera", 310.28, "Speakers",
           27.00, "Television", 1000, "Laptop Case", "CameraLens"]

gadgets_numbers = []
gadgets_strings = []

for i in gadgets:
    if isinstance(i, (int, float)):
        gadgets_numbers.append(i)
    else:
        gadgets_strings.append(i)

print(gadgets_strings)
print(gadgets_numbers)

print("Strings list in ascending order : ", sorted(gadgets_strings))
print("Strings list in descending order : ",
      sorted(gadgets_strings, reverse=True))
gadgets_numbers.sort()
print("Number list from lowest to highest : ", gadgets_numbers)
gadgets_numbers.sort(reverse=True)
print("Number list from highest to lowest : ", gadgets_numbers)
