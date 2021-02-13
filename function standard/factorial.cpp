#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int factorial(int n){
  int fact=1;
  for(int i=2;i<=n;i++){
    fact*=i;
  }
  return fact;
}
int main(){
  int a;
  cout<< "Please input the number to find factorial: ";
  cin>> a;

  cout<< factorial(a);
}
// can be also done by recursion