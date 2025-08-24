#include <iostream>
using namespace std;

class A{
    public:
    
    void display1()
    {
        cout<<"Hi there";
    }
};

class B : public A{
    public:
    
    void display2()
    {
        cout<<"\nHow are you";
    }    
};
int main() {
    B b;
    b.display1();
    b.display2();
    return 0;
}
