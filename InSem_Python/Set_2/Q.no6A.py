def checkSSN(ssn):
    ssn = ssn.split("-")
    if map(len, ssn) != [3, 2, 4]:
        return False
    elif any(not x.isdigit() for x in ssn):
        return False
    return True
