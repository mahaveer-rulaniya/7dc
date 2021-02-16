#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
  int n;
  cout << "Input the number: ";
  cin >> n;

  for (int i =2; i<=n/2 ; i++){
    if(n%i==0){
      cout << i << endl;
    }
  }
}