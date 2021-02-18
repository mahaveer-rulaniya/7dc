#include <iostream>
using namespace std;

int main(){
  int i , j;
  int row , col;
  cout<< "Please input the number of rows : \n";
  cin>> row;
  //cout << "Please input number of columns: \n";
  //cin>> col;
  i=row;
  while(i !=0){
    for(j=1;j<=i;j++){
      cout << "* ";
    }
    cout << endl;
    i--;
  }
}