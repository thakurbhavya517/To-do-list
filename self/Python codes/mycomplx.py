class MyComplexNumber:
    def __init__(self, real=0, imag=0):
        print("MyComplexNumber constructor executing...")
        self.real_part = real
        self.imag_part = imag

    def displayComplex(self):
        print("{0} + {1}i".format(self.real_part, self.imag_part))
        

        