#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
  char input;
  cout<<"Please input the letter :: \n";
  cin>> input;

  if ( input == 'a'|| input == 'e'|| input == 'i' || input ==  'o'|| input =='u'){
    cout<< "The given character is VOWEL\n";
  }
else {
  cout<< "The provided character is consonant !! \n";
}
}