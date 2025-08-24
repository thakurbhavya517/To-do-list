#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a value up to which you wanna add even nembers:";
    cin>>n;
    int i=2;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i+=2;
    }
    cout<<"Sum of even numbers up to "<<n<<" is:"<<endl<<sum;
}