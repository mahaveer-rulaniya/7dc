#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Employee{
  private:              //Private attribute
  int salary;

  public:
  //setter
  void setsalary(int x){
    salary=x;
  }
  public:
  //getter
  int getsalary(){
    return salary;
  }
};
int main (){
  Employee mo;
  mo.setsalary(5000);
  mo.getsalary();

  cout << "Salary is:\n" << mo.getsalary();
  return 0;
}

//Encapsulation is considered good practice to declare your class attributes as private (as often as you can). Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts

//Increased security of data