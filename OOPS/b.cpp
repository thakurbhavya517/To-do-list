#include <bits/stdc++.h>
using namespace std;

class student{
  string name;
  int rollNo;
  int oops, dsa;
  
  public:
  
  void input(){
      cout<<"Enter name: ";
      cin>>name;
      cout<<"Enter Roll No.: ";
      cin>>rollNo;
      cout<<"Enter Marks for OOPS: ";
      cin>>oops;
      cout<<"Enter Marks for DSA: ";
      cin>>dsa;
  }
  
  void calculate(){
      float totalMarks=dsa+oops;
      float percent= (totalMarks/200)*100;
      cout<<"Total Marks: "<<totalMarks<<endl;
      cout<<"Percentage: "<<percent<<endl;
  }
  void display(){
      cout<<"Name: "<<name<<endl;
      cout<<"Roll No.: "<<rollNo<<endl;
      cout<<"OOPS Marks: "<<oops<<endl;
      cout<<"DSA Marks: "<<dsa<<endl;
  }
  
};

int main() {
    student s;
    s.input();
    s.display();
    s.calculate();
   
   return 0;
}