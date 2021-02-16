#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
  int a;
  cout<< "Input the number upto which sum is to be calculated : \n";
  cin>> a;
  int i;
  int sum =0;
  for ( i=0;i<=a;i++){
    sum = sum+ i;
  }
  cout << "Sum of first n natural number is : "<< sum << endl;
}