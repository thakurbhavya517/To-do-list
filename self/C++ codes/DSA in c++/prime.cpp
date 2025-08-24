#include <iostream>
using namespace std;

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; //Prime
}

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;

    int size = sizeof(number);
    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }
    cout <<"Size of number in memory: " << size << " bytes" << endl;
    
    return 0;
}
