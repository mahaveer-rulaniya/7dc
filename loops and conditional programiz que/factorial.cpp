#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
  int fact =1;
  int n;
  cout<< "Input number to find factorial : \n";
  cin>> n;

  for(int i=1; i<=n ; i++){
    fact= fact*i;
  }
  cout<< "The factorial of "<< n << " is :: "<< fact<< endl;
}