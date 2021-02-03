#include <iostream>
#include<string>
#include <cmath>
using namespace std;

int main(){
  int i=1;
  int input;
  int total=0;
  while(i<=4){
    cin>> input;
    total=total+ input;
    i++;
  }
  cout<< "Sum of the input numbers is :: "<<" "<< total<<endl;
  return 0;
}