#include <iostream>
using namespace std;

class B;

class A {
    private:
        float num1;
    public:
        A(float n) : num1(n) {}
        friend void findGreatest(A a, B b);
};

class B {
    private:
        int num2;
    public:
        B(int n) : num2(n) {}
        friend void findGreatest(A a, B b);
};

void findGreatest(A a, B b) {
    if (a.num1 > b.num2) {
        cout << "The greatest number is: " << a.num1 << endl;
    } else {
        cout << "The greatest number is: " << b.num2 << endl;
    }
}

int main() {
    float num1;
    int num2;

    cout<<"Enter the first number: ";
    cin>>num1;

    cout<<"Enter the second number: ";
    cin>>num2;
    
    A a(num1);
    B b(num2);
    
    findGreatest(a, b);
    return 0;
}