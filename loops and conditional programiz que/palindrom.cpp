#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
  int n;
  int reverse = 0;
  int remainder;
  cout<< "Please input the number: "<< endl;
  cin>> n;
  int originalNum= n;

  while(n!= 0 ){
    remainder = n%10;
    reverse = reverse*10 + remainder;
    n = n/10;
  }
  if(reverse == originalNum){
    cout << "The number is Palindrom !! \n";
  }
  else{
     cout << "Not a Palindrom number !! \n ";
  }
}