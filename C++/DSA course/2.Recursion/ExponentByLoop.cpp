#include <iostream>
using namespace std;

int exponent( int m , int n){

    int i = 1;
    int sum = 1;
    while ( i <= n){
      sum = sum * m;
      i++;
    }

     return sum;
}

int main(){

    int r = exponent( 2 , 5);
    cout << r;
}