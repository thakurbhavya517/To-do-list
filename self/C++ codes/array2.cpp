#include <iostream>
using namespace std;

int findlargest(int arr[], int size){
    int largest = arr[0];

    for(int i=1; i<size; i++)
    {
        if (arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}


int main(){
   int arr[] = {1, 8, 175, 7, 56, 90, 87};
   int size = sizeof(arr)/sizeof (arr[0]);
   int largest = findlargest(arr, size);
   cout<<"The largest number in aray is: "<< largest << endl;
   return 0;
}