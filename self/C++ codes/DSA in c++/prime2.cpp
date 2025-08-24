#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n(integer only):";
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"Not prime for "<<i<<endl;
        }
        else{
            cout<<"Prime for "<<i<<endl;
        }
        i+=1;
    }
}