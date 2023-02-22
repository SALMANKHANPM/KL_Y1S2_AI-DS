
def count_digits_letters(string):
    digits = 0
    letters = 0
    for char in string:
        if char.isdigit():
            digits += 1
        elif char.isalpha():
            letters += 1
    return (digits, letters)


input_string = input("Please enter a string: ")
count = count_digits_letters(input_string)
print("The number of digits is {}, and the number of letters is {}.".format(
    count[0], count[1]))
