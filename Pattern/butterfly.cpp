#include <iostream>
#include<string>
#include<cmath>

using namespace std;
int main(){
 int row, i , j;
 cout << "Provide the half the number of rows : ";
 cin >> row;

 // upper half
 for(i=1;i<=row;i++){
   for(j=1;j<=2*row;j++){
     //left pattern
     if(i<j)
       cout << " ";
     else 
      cout << "*";

      // Right half pattern
      if(i<=((2*row) - j))
        cout << " ";
      else 
      cout << "*";
   }
   cout << endl;
 }
 //lower half
 for(i=1; i<=row;i++){
   for(j=1;j<=2*row;j++){
     //left pattern
     if(i>(row-j+1))
      cout << " ";
    else cout << "*";
     //right portion

     if((i+row)>j)
     cout << " ";
     else cout << "*";
   }
   cout << endl;
 }
 return 0;
}
