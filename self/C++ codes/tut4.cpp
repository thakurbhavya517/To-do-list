#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n){
        
        sum=sum+i;
        i+=1;
    }
    cout<<sum;
    cout<<"\nCondition completed!";
}