#include <iostream>
#include <cmath>
using namespace std;
int convertBinaryToDecimal(long long n);

int main(){
  long long n;
  cout << "Input the binary number : \n";
  cin >>  n;
  cout << convertBinaryToDecimal(n);
}

int convertBinaryToDecimal(long long n){
  int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}