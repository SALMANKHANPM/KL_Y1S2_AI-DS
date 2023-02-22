friends = []

while True:
    name = input("Enter a name (type DONE to finish): ")
    if name == "DONE":
        break
    friends.append(name)
    friends.sort()
    print(friends)
