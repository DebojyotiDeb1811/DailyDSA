#include <iostream>
#include <cstdio> 
using namespace std;

int Fun(int n){

    if( n > 100 ){
      return n - 10;
    }

    else{
     return Fun(Fun(n+11));
    }
}

int main(){
    int r;
    r = Fun(95);
    cout << r;
    return 0;
}