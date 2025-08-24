#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int i=1;

    while(i<=n){
        cout<<i<<", ";
        i+=1;
    }
        cout<<"\nTerminated! Condition completed";
    return 0;
}