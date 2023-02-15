# With Recursion
list1 = ["a", "b", ["c", ["d", "e", ["f", "g"], "k"], "l"], "m", "n"]
sub_list = ["h", "i", "j"]

# traverse the list using recursion


def add_sublist(lst, sublst):
    for i in range(len(lst)):
        if type(lst[i]) == list:
            add_sublist(lst[i], sublst)
        elif i == len(lst) - 1:
            lst.append(sublst)


add_sublist(list1, sub_list)

print(list1)

""" =========================================================================================="""

# WithOut Recursion
list1 = ["a", "b", ["c", ["d", "e", ["f", "g"], "k"], "l"], "m", "n"]
sub_list = ["h", "i", "j"]

# create a copy of the list to avoid modifying original list
new_list = list1.copy()
current_list = new_list

# iterate through each item in the list, and check if it is a list
for i in range(len(current_list)):
    if isinstance(current_list[i], list):
        # if it is a list, add the sublist to that list and update the current list to that sublist
        current_list[i].append(sub_list)
        current_list = current_list[i]
        break

print(new_list)
