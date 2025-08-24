#include <iostream>
using namespace std;

class rectangle{
    public:
    float l, b, h;
    void dimensions(){
        cout<<"Enter length:"<<endl;
        cin>>l;
        cout<<"Enter breadth:"<<endl;
        cin>>b;
        cout<<"Enter height:"<<endl;
        cin>>h;
    }
    float calculate(){
    return(l*b*h);
    }
};

int main(){
    //creating an object named rect using rectangle(class)
    rectangle rect;
    
    //input  the dimensions for the rectangle
    rect.dimensions();
    
    float volume = rect.calculate();
    cout<<"The volume of rectangle is:"<<volume;

    return 0;
}
