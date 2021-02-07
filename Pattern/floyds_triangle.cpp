#include <iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
  int i , j;
  int n=4;
  int inc=1;
  for (i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      cout<< inc <<" ";
      inc++;
    }
    cout<< endl;
  }
}