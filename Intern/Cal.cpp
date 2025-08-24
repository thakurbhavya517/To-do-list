#include <iostream>
#include <math.h>
#include <limits>
using namespace std;

int main(){
    char ch;
    do{
        double n1;
        cout<<"Enter the value of first number: ";
        cin>>n1;
        double n2;
        cout<<"Enter the value of second number: ";
        cin>>n2;

        int choice;
        cout<<"Enter your choice:\n";
        cout<<" 1) Addition\n 2) Subtraction\n 3) Multiplication\n 4) Division"<<endl;
        while(!(cin>>choice)){
            cout<<"Invalid input! Please enter a valid choice (1 - 4): ";
            cin.clear(); // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
        };

        switch(choice){
            case 1:
                cout<<"Sum of "<<n1<<" & "<<n2<<" is: "<<n1+n2<<endl;
                break;
            case 2:
                cout<<"Difference of "<<n1<<" & "<<n2<<" is: "<<n1-n2<<endl;
                break;
            case 3:
                cout<<"Product of "<<n1<<" & "<<n2<<" is: "<<n1*n2<<endl;
                break;
            case 4:
                if(n2 != 0){
                    cout<<"Division of "<<n1<<" & "<<n2<<" is: "<<n1/n2<<endl;
                }
                else{
                    cout<<"Error! Division by Zero is not possible (Will lead to infinity)"<<endl;
                }
                break;
            default:
                cout<<"Invalid choice!\nThe selected Operation is not Considered.\nPlease select a valid Operation"<<endl;
        }
        
        cout<<">>>> Do you want to Continue? <<<<\nPlease consider 'Y' for Yes and 'N' for No:\n";
        cin>>ch;
    }
    while(ch == 'Y' || ch == 'y');

    cout<<"Thank you for using our calculator!"<<endl;
    return 0;
}