#include <iostream>
#include <cstdio> 
using namespace std;

int main(){

    int i = 1;
    int sum = 1;

    while( i < 11){
       sum = sum * i;
       i++;
    }

    cout << sum;
}