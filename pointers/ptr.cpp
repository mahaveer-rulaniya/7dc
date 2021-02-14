#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
  int a = 5;
  int *ptr = &a;
  cout<< a << endl << &a << endl<< ptr << endl<< *ptr << endl;
  *ptr = 10;
  cout<< a << endl << ptr+1 << endl;
  cout<< *(ptr+1)<< endl;
  int b=20;
  *ptr = b;
  cout<< *ptr<< endl<< a<< endl;
  
}