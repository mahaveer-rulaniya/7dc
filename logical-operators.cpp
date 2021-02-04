#include<iostream>
#include<cmath>

using namespace std;

int main(){
  int age;
  float income;
  cout<< "Please enter your age:: ";
  cin>> age;
  cout<< "Your monthly income:: ";
  cin>> income;

  if(age>=20 && age<=40 && income > 1000){
    cout<<"You are a working professional\n";
  }
  else if (age< 20 || income< 1000){
    cout<< "You are either student or unemployed person !!\n";
  }
  else {
    cout<< " You are old ... Enjoy your life now!!\n";
  }
}