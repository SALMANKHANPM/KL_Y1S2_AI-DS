def count(string, sOccur):
    occur = 1
    for i in range(len(str_lst)):
        if (sOccur == str_lst[i]):
            occur = occur + 1
    return occur


string = input("Enter a long String  : ")
sOccur = input("Enter a Sting that has Occurrence in Long String : ")
str_lst = string.split()
print(count(str_lst, sOccur))
