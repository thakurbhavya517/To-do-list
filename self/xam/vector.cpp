#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    // Adding elements
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // Accessing elements
    cout << "Element at index 1: " << vec[1] << endl;

    // Iterating through the vector
    cout << "All elements: ";
    for (int value : vec) {
        cout << value << " ";
    }
    cout << endl;

    // Removing the last element
    vec.pop_back();
    cout << "After pop_back, size: " << vec.size() << endl;

    return 0;
}
