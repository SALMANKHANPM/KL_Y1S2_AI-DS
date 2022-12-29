
# Write a python Program to Convert Celsius to Fahrenheit and vice versa.
#########
## F to C ##
t = float(input("Enter the Temperature in Fahrenheit : "))
celsius = (t - 32) / 1.8
print(f"The Temperature in Celsius is : {round(celsius, 2)}")


## C to F ##
t =  float(input("Enter the Temperature in Celsius : "))
fahrenheit = (t * 1.8) + 32
print(f"The Temperature in Fahrenheit is : {round(fahrenheit, 2)}")

