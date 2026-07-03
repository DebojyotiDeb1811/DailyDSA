#include <iostream>
using namespace std;

void Fun1(int n){

    if (n > 0){

     Fun1(n-1);   
     printf("%d" , n);

    }
}

int main(){
    int x = 3;
    Fun1(x);
}