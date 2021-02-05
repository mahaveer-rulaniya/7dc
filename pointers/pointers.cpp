#include <iostream>
using namespace std;

int main(){
  int vee[3]={1,2,3};
  int *ptr1 = &vee[0];
  int *ptr2= &vee[1];
  int *ptr3=&vee[2];

  cout<< ptr1 <<endl << ptr2 << endl<< *ptr3<< endl;

  cout<< "Size of integer is :"<< sizeof(vee[0])<< endl;
  cout<< "Total elements in the array are : "<< sizeof(vee)/sizeof(vee[0]);
}