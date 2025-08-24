#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter any character: ";
    cin>>ch;
    if (ch>= 'A'&& ch<='Z'){
        cout<<"You entered an Uppercase letter.";
    }
    else if (ch>='a'&& ch<='z'){
        cout<<"You entered a lowercase letter.";
    }
    else if (ch>='0'&& ch<='9'){
        cout<<"You entered an integer.";
    }
    else{
        cout<<"You entered a special character";
    }
}
/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>OR<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#include<iostream>
using namespace std;
int main(){
    char user_input;
    cout << "Enter any letter:";
    cin >> user_input;
    // int ascii = int(user_input);
    int ascii = user_input;

    if(ascii>=65 && ascii<=90){
        cout << "Upper Case" << endl;
    }
    else if(ascii>=97 && ascii<=122){
        cout << "Lower Case" << endl;
    }
    else if(ascii>=48 && ascii <=57){
        cout << "Numerical" << endl;
    }
    else{
        cout << "something else" << endl;
    }
}
*/