class BankAccount:
    def __init__(self, accountNumber, name, balance):
        self.__accountNumber = accountNumber
        self.__name = name
        self.__balance = balance

    def Deposit(self, amount):
        self.__balance += amount

    def Withdrawal(self, amount):
        self.__balance -= amount

    def bankFees(self):
        self.__balance -= (self.__balance * 0.05)

    def display(self):
        print("Account number:", self.__accountNumber)
        print("Name:", self.__name)
        print("Balance:", self.__balance)

    def get_balance(self):
        return self.__balance
