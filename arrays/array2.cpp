#include <iostream>

using namespace std;
void Arr(int theArray[], int size);
int main(){
   int vee[3]={1,2,3};
   int hd[5]={4,5,6,7,8};

   Arr(vee,3);
   return 0;
}

void Arr(int theArray[], int size){
  for(int x; x< size; x++){
    cout<< theArray[x]<<endl; 
  }
  
}