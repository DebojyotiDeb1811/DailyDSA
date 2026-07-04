#include <iostream> 
using namespace std;

int Sum(int m , int n){

    if( n ==  0 ){
      return 1;
    }

    else{
     return Sum( m , n-1) * m;
    }
}

int main(){
    int r;
    r = Sum( 2 , 5);
    cout << r;
    return 0;
}