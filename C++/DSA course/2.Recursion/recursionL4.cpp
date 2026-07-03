#include <iostream>
using namespace std;

int Fun1(int n){
    
    static int a = 0;
    if (n > 0){
     a++;
     return Fun1( n-1 ) + a;
    }
    return 0;
}

int main(){
    int x = 5;
    printf( "%d" , Fun1(x));
    return 0;
}