#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main(){
  int n;
  
  cout<< "Input number to generate table : \n";
  cin>> n;

  for(int i = 1; i<=10 ; i++){
    cout<< n*i << endl;
  }
}