#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
  int n1, n2 , sum, digit , num , i;
  cout << "Please input the numbers : \n";
  cin >> n1>> n2;

  for(i=n1; i<=n2 ; i++){
    sum =0;
    num = i;

    for(num = i; num>0;num/=10){
     digit = i%10;
     sum = sum + digit*digit*digit;
    
    }
    if(sum == i){
      cout << i << endl;
    }
  }
  return 0;
}