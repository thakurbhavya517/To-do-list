#include<iostream>
using namespace std;

int main(){
    float P, R, T, SI;
    cout<<"Enter your Principal amaount(like 1000.00): ";
    cin>>P;
    cout<<"Enter your Rate of Interest provided(like 1000.00): ";
    cin>>R;
    cout<<"Enter your Interest Time Period(in Years): ";
    cin>>T;

    SI= (P*R*T)/100;
    cout<<"Your total Simple Interest is: "<<SI;

    return 0;
}
