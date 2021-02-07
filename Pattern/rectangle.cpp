#include <iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
  int i ,j;
  int a,b;
  cout<< "Enter the dimension of rectangle: \nNumber of rows: ";
  cin>> a;
  cout<< "Number of columns: ";
  cin>> b;
  cout<< "Here is your rectangle!!\n";
  for(i=0;i<a;i++){
    for(j=0;j<b;j++){
      cout<<"* ";
    }
    cout<< endl;
  }
  return 0;
}