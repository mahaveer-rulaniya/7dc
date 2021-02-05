#include <iostream>

using namespace std;

int main(){
  int vee[2][3]={{1,2,34},{4,5,67}};

  for (int i=0;i<2;i++){
    for(int j=0;j<3;j++){
      cout<< vee[i][j]<<" ";
    }
    cout<<""<< endl;
  }
}