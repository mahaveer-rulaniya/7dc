#include <iostream>

using namespace std;

int main(){
  int A[]={2, 3, 5,9, 7};
  int *p = A;
  cout<< A << endl << A[0]<< endl << &A[0] << endl << *A << endl << *(A + 2);
  cout<< " .\n\n";
  cout << p+1;
  
}