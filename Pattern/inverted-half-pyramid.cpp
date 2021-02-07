#include <iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
  int i ,j;
  int n;
  cout<< "Enter the dimension of inverted parameter: ";
  cin>> n; 

  for(i=0;i<n;i++){
    for(j=0;j<n-i;j++){
      cout<<j<<" ";
    }
    cout<< endl;
  }
}