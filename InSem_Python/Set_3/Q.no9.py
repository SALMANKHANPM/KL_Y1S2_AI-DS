def numVowels(string):
    vowels = 0
    consonants = 0
    for char in string:
        if char.lower() in 'aeiou':
            vowels += 1
        elif char.lower() in 'bcdfghjklmnpqrstvwxyz':
            consonants += 1
    return (vowels, consonants)


input_string = input("Please enter a string: ")
count = numVowels(input_string)
print("The number of vowels is {}, and the number of consonants is {}.".format(
    count[0], count[1]))
