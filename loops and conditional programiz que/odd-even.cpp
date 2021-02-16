#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
  int a;
  cout<<"Input the number: "<<endl;
  cin>> a;

  if (a%2==0){
    cout<< " The given number is even!!\n";
  }
  else{
    cout<< "The number is odd !!"<< endl;
  }
  return 0;
}