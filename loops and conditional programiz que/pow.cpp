#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main(){
  int n , p ;
  cout << "Input the number : \n";
  cin >> n;
  cout << "Power of : \n";
  cin >> p;
  int result=1;

  for (int i = 1 ; i <= p ; i++){
      result = result * n;
  }
  cout << "The result is : "<< result << endl;
}