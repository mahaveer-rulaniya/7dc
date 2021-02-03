#include <iostream>
#include <cmath>
#include <string>

using namespace std;
// Class Methods
class MyClass{
  public:
  // Declaring the method inside class
    int speed(int x);
};
//Defining the method outside the class
int MyClass :: speed(int x){
  return x;
}

int main (){
  MyClass mo;
  cout<< mo.speed(2000);
  return 0;
}