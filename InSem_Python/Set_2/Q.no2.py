def pound_to_gram(pound):
    return pound * 453.59237


def gram_to_pound(gram):
    return gram / 453.59237


def inch_to_cm(inch):
    return inch * 2.54


def cm_to_inch(cm):
    return cm / 2.54


def km_to_mile(km):
    return km * 0.6214


def mile_to_km(mile):
    return mile / 0.6214


# test cases
print(pound_to_gram(1))    # 453.59237
print(gram_to_pound(453.59237))    # 1.0
print(inch_to_cm(1))    # 2.54
print(cm_to_inch(2.54))    # 1.0
print(km_to_mile(1))    # 0.6214
print(mile_to_km(0.6214))    # 1.0
