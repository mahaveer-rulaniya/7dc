#include <iostream>
using namespace std;

int sum(int n){

  if(n!= 0){
  return n + sum(n-1);
  }
}

int main(){
    int a;
    cout<< "please input the number upto which sum is to be calculated : \n";
    cin >> a;

    cout << "Sum is :: "<< sum(a)<< endl;
}