#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers!" << endl;
    } else {
        cout << "The factorial of " << number << " is " << factorial(number) << endl;
    }

    return 0;
}





/* Without using functions-->
#include <iostream>
using namespace std;

int main() {
    int number;
    int result = 1;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers!" << endl;
    } else {
        for (int i = 1; i <= number; i++) {
            result *= i;
        }
        cout << "The factorial of " << number << " is " << result << endl;
    }

    return 0;
}
*/