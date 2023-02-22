# Prompt user to enter the state of two switches
switch1 = input("Enter state of switch 1 (0 for off, 1 for on): ")
switch2 = input("Enter state of switch 2 (0 for off, 1 for on): ")

# Check if both switches are on and output message accordingly
if switch1 == '1' and switch2 == '1':
    print("The light is on")
else:
    print("The light is off")

##########################################

# Prompt user to enter a date
year = input("Enter year: ")
month = input("Enter month: ")
day = input("Enter day: ")

# Output the date in the format of "dayth month year"
if day[-1] == '1' and day != '11':
    day += 'st'
elif day[-1] == '2' and day != '12':
    day += 'nd'
elif day[-1] == '3' and day != '13':
    day += 'rd'
else:
    day += 'th'
print(f"{day} {month} {year}")
