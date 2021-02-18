#include <iostream>

using namespace std;

bool sumOf(int n){
    int i;
    int j;
    int isPrime=1;

    if (n == 0 || n == 1) {
        isPrime = 0;
    }
    else{
    for(i=2;i<=n/2;++i){
      
      if(n%i==0){
        isPrime = 0;
        break;
      }
    }
    }
 return isPrime;
}

int main(){
      int a , i;
      int flag=0;
      cout << "please input a number : \n";
      cin >> a;
      
      for(i=2; i<=a/2;++i){
        if(sumOf(i)){
          if(sumOf(a-i)){
            cout << "It can be expressed as sum of two prime numbers as :: \n";
            cout << a << "="<< i << "+"<< a-i << endl;
            flag=1;
          }
        }
      }
      if(flag == 0){
        cout<< "Can't be expressed as sum of Prime numbers !! \n";
      }

}