#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex() : real(0), imag(0) {}  // Default constructor
    Complex(float r, float i) : real(r), imag(i) {}  // Parameterized constructor

    // Overloading operators will come here
    Complex operator+(const Complex& obj) {
        Complex temp;
        temp.real = this->real + obj.real;
        temp.imag = this->imag + obj.imag;
        return temp;
    }

    // Function to display the complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.2, 2.1);
    Complex c2(1.5, 4.3);

    Complex c3 = c1 + c2;  // Using overloaded +

    c3.display();  // Output: 4.7 + 6.4i
    return 0;
}
