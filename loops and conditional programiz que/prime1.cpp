#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
  int n;
  int flag= 0;
  cout << "Please input a number : \n";
  cin >> n;

  for(int i=2; i<n; i++){
    if(n%i==0){
      cout << "The given number is not a prime number !\n";
      flag = 1;
      break;
    }
   
  }
   if (flag==0)  
      cout << "Number is Prime."<<endl;  
}