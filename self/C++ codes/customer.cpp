#include <bits/stdc++.h>
using namespace std;

class vehicle{
  string name;
  string no;
  string car;
  string colour;
  
  public:
  
  void input(){
      cout<<"Enter name:";
      cin>>name;
      cout<<"Enter Car No.:";
      cin>>no;
      cout<<"Enter Car Name:";
      cin>>car;
      cout<<"Enter Car Colour:";
      cin>>colour;
  }
  
  void display(){
      cout<<"\nCar Holder Name:"<<name<<endl;
      cout<<"Car Number.:"<<no<<endl;
      cout<<"Car Name:"<<car<<endl;
      cout<<"Car Colour:"<<colour;
  }
  
};

int main() {
    vehicle v;
    v.input();
    v.display();
   
    return 0;
}