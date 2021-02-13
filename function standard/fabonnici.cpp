#include <iostream>
#include<cmath>
#include<string>

using namespace std;

void fab(int n){
  int t1=0;
  int t2=1;

  for(int i=1;i<=n;i++){
    int next = t1+t2;

    cout<< next << endl;

    t1=t2;
    t2=next;
  }
}
int main(){
  int a;
  cout<< "Please input a number: ";
  cin>> a;
  fab(a);
}