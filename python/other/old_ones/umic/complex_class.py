import math


class Complex:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def display(self):
        if self.y == abs(self.y):
            print(f'{self.x} + {abs(self.y)}i')
        else:
            print(f'{self.x} - {abs(self.y)}i')

    def modulus(self):
        print(math.sqrt(self.x**2 + self.y**2))

    def conjugate(self):
        if self.y == abs(self.y):
            print(f'{self.x} - {abs(self.y)}i')
        else:
            print(f'{self.x} + {abs(self.y)}i')

    def inverse(self):
        if not (self.x == 0 and self.y == 0):
            m = self.x ** 2 + self.y ** 2  # m is the square of the modulus
            if self.y == abs(self.y):
                print(f'{self.x / m} - {abs(self.y / m)}i')
            else:
                print(f'{self.x / m} + {abs(self.y / m)}i')
        else:
            print("Inverse doesn't exist")

    def addition(self, sec_complex):
        return Complex(self.x + sec_complex.x, self.y + sec_complex.y)

    def subtraction(self, sec_complex):
        return Complex(self.x - sec_complex.x, self.y - sec_complex.y)  # a.subtraction(b) will raise a - b

    def multiplication(self, sec_complex):  # a+ib   c+id    ac adi bci -bd
        return Complex(self.x * sec_complex.x - self.y * sec_complex.y, self.x * sec_complex.y + self.y * sec_complex.x)



