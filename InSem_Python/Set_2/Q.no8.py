def has_unique_characters(string):
    unique_characters = set(string)
    if len(unique_characters) == len(string):
        return True
    else:
        return False


string = input("Enter a string: ")

result = has_unique_characters(string)
print(result)
