#include<iostream>

using namespace std;

void Num(int x){
  cout<< "We can get integer as :"<< x<< endl;
}

void Num(double x){
  cout<< "Now we can get the decimal number : "<<x << endl;
}
int a = 42;
double b=42.77;    //Global variables

int main(){
  //Local variables
  int a= 32;
  double b = 32.99;

  Num(a);
  Num(::b);  //Unary Scope Resolution operator
  return 0;
}