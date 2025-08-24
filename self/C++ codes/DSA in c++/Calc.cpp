
#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter the value of"<<endl<<"a:";
    cin>>a;
    cout<<"and b:";
    cin>>b;
    char op;
    cout<<"Enter the operation you want to perform('+', '-', '*' or '/'): ";
    cin>>op;
    switch(op){
        case '+':
            cout<<"a+b: "<<a+b;
            break;

        case '-':
            cout<<"a-b: "<<a-b;
            break;

        case '*':
            cout<<"a*b: "<<a*b;
            break;

        case '/':
            cout<<"a/b: "<<a/b;
            break;

        default :
            cout<<"Please Enter a valid operation!!";

    }
}