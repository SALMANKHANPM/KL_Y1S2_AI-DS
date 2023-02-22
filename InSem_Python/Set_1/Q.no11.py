# Part A
w = "hello world"
consonants = [c for c in w if c.isalpha() and c not in "aeiou"]
print(consonants)

# Part B
divisible_by_3 = [n for n in range(1, 101) if n % 3 == 0]
print(divisible_by_3)

# Part C
sentence = "In 1984 there were 13 instances of a protest with over 1000 people attending"
numbers_only = [int(word) for word in sentence.split() if word.isdigit()]
print(numbers_only)

# Part D
string = "The quick brown fox jumps over the lazy dog"
short_words = [word for word in string.split() if len(word) < 4]
print(short_words)
