#include <iostream>
#include <math.h>
using namespace std;
class solution{
    int reverse(){
        int n;
        cout<<"What should be the value of n?"<<endl;
        cin>>n;
        int ans = 0;
        int i = 0;
        while(n!=0){
            int digit = n%10;
            ans = (ans*10) + digit;
            n=n/10;
        }
        cout<<"Number is: "<<ans;
    }
};
