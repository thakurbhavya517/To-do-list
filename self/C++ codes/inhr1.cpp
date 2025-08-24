#include<iostream>
using namespace std;

class A
{
    public:
        A(){
            cout<<"A Const."<<endl;
        }
        ~A(){
            cout<<"A destr."<<endl;
        }
};

class B : public A{
    public:
    B(){
        cout<<"B Constr."<<endl;
    }
    ~B(){
        cout<<"B Destr."<<endl;
}
};

int main() {
    B obj;
    return 0;
}
