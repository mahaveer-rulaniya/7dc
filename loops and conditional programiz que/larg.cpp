#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main(){
  int a , b ,c;
  cout<<"Input the three numbers: \n";
  cin >> a >> b >> c;

  if(a>b && a>c){
    cout << a << " is the largest number ! \n";
  }
  else if( b>a && b>c){
    cout << b << " is the largest number ! \n";
  }
  else {
    cout<< c << " is the lagrest number ! \n";
  }
}