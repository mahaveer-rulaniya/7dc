#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
  int op;
  cout << "Please provide the operation you want to do :: \n";
  cout << "1 --> Addition \n2--> Subtraction \n3--> Multiply \n4--> Division\n";
  cin >> op;
  float x, y ;
  cout<< "Please input the numbers : \n";
  cin >> x>> y;

  switch(op){
    case 1:
    cout << "Result --> " << x+y;
    break;
    case 2:
    cout << "Result --> " << x-y;
    break;
    case 3:
    cout << "Result --> " << x*y;
    break;
    case 4:
    if(y==0){
      cout << "division can't be performed !";
    }
    else
    cout << "Result --> " << x/y;
    break;
    default:
    cout << "enjoy !!";
  }
}