#include <iostream>
using namespace std;
class Encapsulation{
    private:
        int x;
    public:
        void set(int a){
            x=a;
        }
        int get(){
            return x;
        }
};
int main(){
    Encapsulation Obj;
    Obj.set(6);
    cout << Obj.get();
    return 0;
}