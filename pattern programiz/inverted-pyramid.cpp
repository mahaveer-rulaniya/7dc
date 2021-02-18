#include<iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
  int totalRow , row , space , symbol;

  cout << "Please input number of rows:: ";
  cin >> totalRow;

  for(row=totalRow; row>=1;row--){
    // loop for spaces
    for(space =1 ; space<=totalRow-row; space ++){
      cout << " ";
    }
    // loop for symbols
    for(symbol=1;symbol<=((2*row)-1); symbol++){
      cout << "* ";
    }
    cout << endl;
  }
}