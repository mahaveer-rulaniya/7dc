#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
  int n;
  cout << "Input the number : "<< endl ;
  cin >> n;
  int rev = 0;
  while(n!= 0 ){
    int tem = n%10;
    rev = rev*10 + tem;
    n=n/10;
  }
  cout << rev;
}