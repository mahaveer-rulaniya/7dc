#include <iostream>
using namespace std;

int add(int x, int y, int z){
  int addition = x+ y+ z;
  return addition;
}

int main(){
  int a , b, c;
  cout<< "Provide three numbers to add ::\n";
  cin>> a;
  cin>>b;
  cin>> c;
  
  cout << "Addition is:\n"<<add(a,b,c);
  return 0;
}