#include <iostream>
#include<string>
#include <cmath>
using namespace std;

int main (){
  int a;
  cout<< "Give any number\n";
  cin>> a;

  if(a%2==0){
     cout<< "The given number is even\n";
     if(a%6==0){
       cout<<"Also it is a multiple of 6\n";
     }
  }
  else
  {
   cout<< "the given number is odd number\n"; 
  }
  
  return 0;
}