#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
  int i ,j;
  int n;
  cout<< "Input a number to test it : ";
  cin>> n;

    for(j=2;j<=sqrt(n);j++){
      if(n%j==0){
        cout<<n<<" is Not a Prime Number !!\n";
        break;
      }
      else{
        cout<<n<<" is Prime Number\n";
        break;
      }
    }
}