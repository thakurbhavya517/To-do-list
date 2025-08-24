#include <bits/stdc++.h>
using namespace std;

class employee{
  string name;
  int sal;
  
  public:
  
  
  void display(){
      cout<<"Name:"<<name<<endl;
      cout<<"Salary.:"<<sal<<endl;
  }
  
  employee(){
      name="Bhavya";
      sal=5000000;
  }
  
  employee(string n, int s){
      name=n;
      sal=s;
  }
  
};

int main() {
    employee e1;
    e1.display();
    cout<<endl;
    employee e2("Shubh",4600000);
    e2.display();

return 0;
}