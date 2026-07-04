#include <iostream>
#include <cstdio> 
using namespace std;

int main(){

    int i = 0;
    int sum = 0;

    while( i < 11){
       sum = sum + i;
       i++;
    }

    cout << sum;
}