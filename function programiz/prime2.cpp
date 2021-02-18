#include <iostream>
using namespace std;

void prime(int n){
  int i , j ;
  int flag =0;
  for(i=2;i<=n/2;i++){
    if(n%i==0){
      cout << "Not a Prime number !!\n";
      flag = 1;
      break;
    }
  }
  if(flag == 0){
    cout << "Prime number !! \n";
  }
}


int main(){
    int a;
    cout << "Please input a number : \n";
    cin >> a;
    prime(a);
}