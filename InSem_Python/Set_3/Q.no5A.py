
def remove_odd_index_characters(string):
    output_string = ''
    for i in range(len(string)):
        if i % 2 == 0:
            output_string += string[i]
    return output_string


string = input("Enter a string: ")

output_string = remove_odd_index_characters(string)
print("String with characters of odd index removed:", output_string)
