#include <iostream>

using namespace std;

int main(){
  int vee[5]={1,2,3,4,5};
  int sum=0;
  for(int i=0; i<5;i++){
    sum+=vee[i];

    cout<<" the sum upto "<< i <<"th number is :"<< sum<< endl;
  }
  cout<< "Total sum of all the numbers is:: "<< sum<< endl;
  return 0;
}