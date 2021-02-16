#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
  int n1, n2;
  cout << "Please input the numbers : \n";
  cin >> n1>> n2;
  int flag ;
  int i , j ;
  for(int i=n1; i <=n2;i++ ){
      // Skip 0 and 1 as they are
      // niether prime nor composite
    if (i == 1 || i == 0)
          continue;
        // flag variable to tell
        // if i is prime or not
        flag =1;
        
    for(int j=2; j<=i/2 ;++j){
       if (i%j ==0){
         flag =0;
         break;
       }
    }
       if(flag==1){
    cout << i<< " ";
    }
  }
}