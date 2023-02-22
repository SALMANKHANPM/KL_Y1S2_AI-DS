# numAsStr = input("Enter a Number : ")
# sum = 0

# for i in range(len(numAsStr)):
#     sum = sum + pow(int(numAsStr[i]), i + 1)

# if (sum==int(numAsStr)):
#     print('Diasirium')
# else :
#     print('Not a diasirium')

list1 = ["a", "b", ["c", ["d", "e", ["f", "g"], "k"], "l"], "m", "n"]
sub_list = ["h", "i", "j"]
list1[2][1][2].extend(sub_list)
print(list1)