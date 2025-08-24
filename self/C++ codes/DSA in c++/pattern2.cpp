/*like-
321
321
321 ...*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int i=1;
    int o;
    while(i<=n){
        int j=1;
        while(j<=n){
            o = n-j+1;
            cout<<o;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}