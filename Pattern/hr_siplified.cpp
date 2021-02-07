#include <iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
  int i , j;
  int m;
  int n;
  cout<< "Please provide the dimensions of Hollow Rectangle: "<<endl << "Number of rows: ";
  cin>> m;
  cout<< "Number of columns: ";
  cin>> n;

  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      if(i==0||i==m-1 || j==0 || j==n-1){
        cout<<"* ";
      }
      else{
        cout<<"  ";
      }
    }
    cout<< endl;
  }
}