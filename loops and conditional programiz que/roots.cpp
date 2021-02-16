#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
  int a , b ,c ;
  cout<< "Please input the coefficient of quadratic equation ax^2 + bx + c : \n";
  cin>> a >> b >> c;

  if(pow(b, 2)-4*a*c >= 0){
    float firstRoot = (-b + sqrt(pow(b, 2)-4*a*c))/(2*a);
    float SecondRoot = (-b - sqrt(pow(b, 2)-4*a*c))/(2*a);

    cout << "Roots of equation are : "<< firstRoot << " and "<< SecondRoot<< endl;
  }
  else {
    cout<< "Equation will have imaginary roots ! \n";
  }
}