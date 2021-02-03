#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//A constructor is a special method that is automatically called when an object of a class is created.

class User{
  public:                    //Access specifier
  // Attributes
  int age;
  string name;
  string place;

  User(int x, string y, string z){ //Constructor with parameters
    age= x;
    name= y;
    place= z;

  }
};

int main(){
  // Create User objects and call the constructor with different values
  User mo(21,"Mahaveer Rulaniya","Losal");
  User mo1(23,"Dinesh","Sikar");

  cout<< mo.age << " " << mo.name << " " << mo.place << endl;
  cout<< mo1.age << " " << mo1.name << " " << mo1.place << endl;
  return 0;
}
