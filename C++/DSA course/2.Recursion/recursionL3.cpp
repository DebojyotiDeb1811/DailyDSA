#include <iostream>
using namespace std;

int Fun1(int n){
    
    if (n > 0){
     return Fun1( n-1 ) + n;
    }
    return 0;
}

int main(){

    int x = 5;
    printf( "%d" , Fun1(x));
    return 0;
}