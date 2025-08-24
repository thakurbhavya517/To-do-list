#include <iostream>
using namespace std;

template <typename T>
T addValues(T a, T b) {
    return a + b;
}

int main() {
    int int1, int2;              // Declare variables for different data types
    double double_1, double_2;

    cout << "Enter two integers:" << endl;
    cin >> int1 >> int2;
    cout << "Sum of integers: " << addValues(int1, int2) << endl;

    //for Double values
    cout << "Enter two floating-point numbers(like- 1.3):" << endl;
    cin >> double_1 >> double_2;
    cout << "Sum of floating-point numbers: " << addValues(double_1, double_2) << endl;

    return 0;
}
