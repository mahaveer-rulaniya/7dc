#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
  int n1 , n2;
  int lcm;
  cout << "Input the numbers to find LCM: \n";
  cin>> n1>> n2;
  int max;
  
  max= (n1>n2)? n1 : n2;

  do{
     if (max%n1 ==0 && max%n2==0){
       cout << "LCM is "<< max;
       break; 
     }
     else {
       ++ max;
     }
  }while(true);
}