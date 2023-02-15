string = str(input("Enter a String  : "))

words = string.split()

for i in range(len(words)):
    word = words[i]
    words[i] = word[0].upper() + word[1:-1] + word[-1].upper()

print(" ".join(words))
