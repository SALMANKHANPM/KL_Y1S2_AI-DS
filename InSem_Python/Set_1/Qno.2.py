# Write a Python program in which the user enters
# either 'S', 'T', or 'D'. If 'S' is entered, the program
# should display the word 'Shaddock'; if 'T' is entered,
# it displays 'Tamarind'; and if 'D' is entered, it
# displays 'Dragon fruit'


code = input("Enter any Letter from Among 'S', 'T', 'D' : ").upper()

if (code == 'S'):
    print("Shaddock")
elif (code == 'T'):
    print("Tamarind")
elif (code == 'D'):
    print("Dragon fruit")
