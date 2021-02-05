#include<iostream>
#include<cmath>

using namespace std;

int main(){

  int age;
  cout<<"Please enter your age \n";
  cin>> age;

  switch(age){
    case 15:
    cout<< "You are very young !!\n";
    break;

    case 20:
    cout<< "Focus on studies\n";
    break;

    case 30:
    cout<< "Get a good job!!\n";
    break;

    default:
    cout<< "I don't know you much !!\n";
    
  }
   
}