number = {0: "Zero", 1: "One", 2: "Two", 3: "Three", 4: "Four",
          5: "Five", 6: "Six", 7: "Seven", 8: "Eight", 9: "Nine", 10: "Ten"}

odd = {_odd: i for _odd, i in number.items() if _odd % 2 == 1}

print("The keys in ODD DICTIONARY : ", odd.keys())
print("The values in ODD DICTIONARY : ", odd.values())
print("The items in ODD DICTIONART : ", odd.values())
print("The Length of the ODD DICTIONARY : ", len(odd.items()))


print(number[9])

print(odd)

if 7 in odd:
    print("7 is present..")
else:
    print("7 not Present")

if 2 in odd:
    print("2 is Present..")
else:
    print("2 is not Present..")

print("The Value of Key 9 is : ", odd[9])


del odd[5]
print("After Deletion of Key 5 : ", odd)
