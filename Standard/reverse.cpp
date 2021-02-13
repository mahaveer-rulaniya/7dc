#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
  int n;
  cout<< "Enter the number to reverse the order: ";
  cin>> n;
  int rev=0;
  while(n>0){
      int lastD= n%10;
      rev=rev*10 + lastD;

      n=n/10;
  }
  cout<<"Reverse order is :: "<< rev;
}