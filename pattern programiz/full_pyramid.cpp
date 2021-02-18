#include <iostream>
using namespace std;

int main(){

   int row, i , j,k;
   row = 5;

   for(i=1;i<=row;i++){
     //for spaces
     for(int j =1; j<=(row-i);j++)
       cout << " ";
       // for printing
       for(k=1;k<=((2*i)-1);k++)
         cout << "*";
       
     cout << endl;
   }

  return 0;
}