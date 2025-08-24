/*like- 
1
23
345
4567 ...*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int o=i;
        while(j<=i){
            cout<<o;
            o+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}