def convertStatus(code):
    """
    This function takes a character code 'f', 's', 'j', or 'r'
    and returns the string 'freshman', 'sophomore', 'junior',
    or 'senior', respectively. If an inappropriate letter is
    passed, an error value is returned.
    """
    if code == 'f':
        return 'freshman'
    elif code == 's':
        return 'sophomore'
    elif code == 'j':
        return 'junior'
    elif code == 'r':
        return 'senior'
    else:
        return 'Error'


status_code = input("Enter a status code (f, s, j, r): ")
status = convertStatus(status_code)

print(status)
