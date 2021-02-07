#include <iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
  int i,j;
  int m=4, n=6;

  for(i=0;i<m;i++){
    for (j=0;j<n;j++){
  if (i==0 || i== m-1){
      cout<< "*";
  }
  else{
    if(j==0|| j==n-1){
      cout<<"*";
    }
    else{
      cout<<" ";
    }
  }
  }
  cout<< endl;
  }
}