#include <iostream>

using namespace std;

int gcd(int n1, int n2){
   if (n2 != 0)
       return gcd(n2, n1 % n2);
    else 
       return n1;
}

int main(){
  int a, b;
  cout << "Input the numbers : \n";

  cin>> a >> b;

  cout << "HCF of "<< a << " , " << b << " is --> "<< gcd(a,b)<< endl;

}