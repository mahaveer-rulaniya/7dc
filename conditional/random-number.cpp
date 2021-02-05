#include<iostream>
#include<cmath>
#include <cstdlib>
#include<ctime>
using namespace std;

int main(){
   srand(time(0)); // for generating random numbers in each run

   for(int i=1; i<6;i++){
     cout<< 1+(rand()%6) <<endl;
   }
}