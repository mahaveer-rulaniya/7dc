#include <iostream>
#include<string>
#include<cmath>

using namespace std;
int main(){
  int i, j;
  int n=5;
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      cout<<"*";
    }
    int sp= 2*n-2*i;
    for (j=1;j<=sp;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}
// Again try to understand !! 