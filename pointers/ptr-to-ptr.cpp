#include<iostream>
using namespace std;

int main(){
  int x= 5;
  int *p = &x;
  int **q= &p;

  cout<< x << endl<< p<< endl<< *p << endl<< q<< endl<< **q << endl;
  
}