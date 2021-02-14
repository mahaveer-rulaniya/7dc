#include <iostream>
#include <fstream>

using namespace std;

int main(){
  // create and write to a file -->
  ofstream Myfile("vee.txt");

  Myfile<< " Hello!! \n I am good boy. My name is \n Mahaveer";

  Myfile.close();
 
 // Read the file created -->
  string mytxt;
  ifstream Myreadfile("vee.txt");

  while (getline (Myreadfile, mytxt)) {
  // Output the text from the file
  cout << mytxt;
  }
  Myreadfile.close();

}