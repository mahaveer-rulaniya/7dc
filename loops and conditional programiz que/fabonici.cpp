#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main(){
  int f1=0;
  int f2=1 ;
  int n = 10;
  for(int i = 1 ; i< n ; i++){
    int next = f1+f2;
    cout << next << endl;
    f1= f2;
    f2= next;
  }
}