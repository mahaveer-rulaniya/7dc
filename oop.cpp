#include <iostream>
using namespace std;

// Create a class with some attributes and methods
class MyClass{
  public:                  //It can accessed outside the class
    int myNum;                 //attributes
    //methods or functions
    void fun(){
      cout<< "Created my first class\n";
    }

};

int main(){
  
  MyClass myobj;               //creating object
  //accessing attributes and methods from class
  myobj.myNum= 5;
  myobj.fun();

  cout<< "Attribute is :\n"<< myobj.myNum<<endl;

  return 0;
}