#include <iostream>
#include <cmath>

using namespace std;

int power(int x, int p){
    if(p!=0){
      return x * power(x, p-1);
    }
    else return 1;
}

int main(){
    int a , p;
    cout << "please input the number and its power : \n";
    cin >> a >> p;

    cout << power(a,p);
}