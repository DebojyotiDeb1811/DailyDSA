#include <iostream>
using namespace std;

void Fun1(int n){

    if (n > 0){

     printf("%d" , n);
     Fun1(n-1);

    }
}

int main(){
    int x = 3;
    Fun1(x);
}
