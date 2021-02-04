#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
  int input;
  int sum=0;
  int total_Input=0;

  cout<<"Enter a number to sum or -1 to exit\n";
  cin>> input;

  while(input!=-1){
    sum=sum+ input;
    total_Input++;

    cout<<"Enter a number to sum or -1 to exit\n";
    cin>> input;

  }

  cout<<"Total number of inputs provided is: "<<total_Input<< endl;
  cout<< "Average of the inputs is: "<< sum/total_Input<<endl;
  return 0;
}