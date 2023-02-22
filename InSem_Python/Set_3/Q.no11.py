
class Bike:
    def __init__(self, color, price):
        self.__color = color
        self.__price = price

    def get_color(self):
        return self.__color

    def set_color(self, value):
        self.__color = value

    def get_price(self):
        return self.__price

    def set_price(self, value):
        if value <= 100.00:
            self.__price = value
        else:
            raise ValueError('Price cannot be greater than 100.00!')

    def __str__(self):
        return 'The bike has a color of {}, and a price of {}.'.format(self.get_color(), self.get_price())


testOne = Bike('blue', 89.99)
testTwo = Bike('purple', 25.0)
