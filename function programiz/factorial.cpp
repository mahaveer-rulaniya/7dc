#include <iostream>
using namespace std;

int factorial(int n){
  if(n!=1){
    return n* factorial(n-1);
  }
}

int  main(){
   int a;
   cout << "Please input the number to find factorial : \n";
   cin >> a;

   cout << "Factorial is --> "<< factorial(a)<< endl;
}