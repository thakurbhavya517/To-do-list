#include <iostream>
using namespace std;

int main(){
    cout<< "Hello! This is a simple calculator for calculation of two numbers."<<endl;
    char ch;
    do{
        double n1, n2;
        cout<<"Enter the first number:\n";
        cin>>n1;
        cout<<"Enter the second number:\n";
        cin>>n2;

        string choice;
        cout<<"Enter the operation you want to perform among the following\n"<<"1) Addition (+)\n"<<"2) Subtraction (-)\n"<<"3) Multiplication (*)\n"<<"4) Division (/)"<<endl;
        cin>>choice;

        if (choice == "1" || choice == "+") {
            cout<<"Sum of "<<n1<<" & "<<n2<<" is: "<<n1+n2<<endl;
        } else if (choice == "2" || choice == "-") {
            cout<<"Difference of "<<n1<<" & "<<n2<<" is: "<<n1-n2<<endl;
        } else if (choice == "3" || choice == "*") {
            cout<<"Product of "<<n1<<" & "<<n2<<" is: "<<n1*n2<<endl;
        } else if (choice == "4" || choice == "/") {
            if(n2 != 0) {
                cout<<"Division of "<<n1<<" & "<<n2<<" is: "<<n1/n2<<endl;
            } else {
                cout<<"Error! Division by Zero is not possible."<<endl;
            }
        } else {
            cout<<"Invalid operation! Please enter a valid operation."<<endl;
        }
        cout<<" >>>> Do you want to contine? <<<<\nPlease Consider 'Y' for Yes nad 'N' for No:\n";
        cin>>ch;
    }
    while (ch == 'Y' || ch == 'y');
    cout<<"Thank You for using our Calculator!"<<endl;

    return 0;
}