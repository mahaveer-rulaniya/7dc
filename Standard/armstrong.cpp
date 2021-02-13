#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
  int n;
  cout<<"provide a number to check if it Armstrong number or not :: ";
  cin>> n;

  int sum= 0;
  int originalNum=n;
  while(n>0){
    int LastD = n%10;
    sum=sum + pow(LastD, 3);

    n=n/10;
  }
  cout<<"Sum of cubes of digits of input is :: "<<sum<< endl;
  if(originalNum==sum){
    cout<< "Input is Armstrong Number !\n";
  }
  else{
    cout<<"Input is not Armstrong number!!\n";
  }
}