#include<iostream>
#include<string>                                                // Include the string library
using namespace std;

int main() {
    string str1, str2, str3, str4, result;
    
     // Take input for both strings
    cout << "Enter the first string: ";
    getline(cin, str1);                                         // Using getline to allow spaces
    cout << "Enter the second string: ";
    getline(cin, str2);
    cout << "Enter the third string: ";
    getline(cin, str3);
    cout << "Enter the fourth string: ";
    getline(cin, str4);
    
    // Concatenate using the '+' operator
    result = str1 +"\n"+ str2 +"\n"+ str3 +"\n"+ str4;

    cout << "Concatenated Group: \n" << result << endl;

    return 0;
}
