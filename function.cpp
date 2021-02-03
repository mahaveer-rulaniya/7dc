#include <iostream>
using namespace std;

void favNum (int x);

int main(){
  int a;
  cout<< "Give a number:\n";
  cin>> a;
  
  favNum(a);
  return 0;
}

void favNum (int x){
  cout << "Mahaveer favourite number is" << endl << x << endl;
}