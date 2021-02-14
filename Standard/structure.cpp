#include <iostream>
using namespace std;

struct vee
{
  int age;
  string name;
  float salary;
};

int main(){
   struct vee data;
   data.age = 20;
   data.name = "mahaveer";
   data.salary = 400000.99;

   cout<<"Age is : "<< data.age << endl << "Name is : "<< data.name << endl << "Salary is : "<< data.salary<< endl;

   struct vee data1 = {30, "Mahaveer", 45555.55};
   cout << data1.age<< endl;

}