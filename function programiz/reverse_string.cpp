#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void reverse(string x){
    string x_new = "";

    for(int i= x.size()-1 ; i>=0 ; --i){
      x_new = x_new + x[i];

    }
    cout << x_new;

}

int main(){
  string a;
  cout << "Please input the string : \n";
  getline(cin , a);

  reverse(a);

}