def is_valid_password(password):
    if len(password) < 8:
        return False

    digit_count = 0
    for c in password:
        if not c.isalnum():
            return False
        if c.isdigit():
            digit_count += 1

    return digit_count >= 2


password = is_valid_password(input("Enter PassWord : "))

if (password == True):
    print("Valid")
else:
    print("InValid")
