#include<iostream>
#include<cmath>

using namespace std;

int main(){

  float a;
  float p;
  float r;
  
  cout<< "What Principal Amount do you want to invest ? \n";
  cin>> p;
  cout<< "At what rate ? \n";
  cin >> r;
  
  for(int day=1; day<10 ; day++){
    a= p* pow(1+r, day);

    cout<< "Amount as of on day : " << day << "  is ---"<< a<< endl;
  }
  return 0;
}