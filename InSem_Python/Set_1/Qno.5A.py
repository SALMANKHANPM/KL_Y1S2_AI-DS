import random as random

lst = [30, 1, 2, 1, 0]

print("Before          : ", lst)
lst.append(40)
print("After Append    : ", lst)
lst.insert(1, 43)
print("After Insert    : ", lst)
lst.extend([1, 43])
print("After Extend    : ", lst)
lst.remove(1)
print("After Remove    : ", lst)
lst.pop()
print("After Pop       : ", lst)
lst.sort()
print("After Sorting   : ", lst)
lst.reverse()
print("After Reversing : ", lst)
random.shuffle(lst)
print("After Shuffling : ", lst)
