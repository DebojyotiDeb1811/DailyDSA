#include <iostream>
using namespace std;

void swap(int *x , int *y){

    // Change in function 

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    
    cout << "x is " << x << endl;
    cout << "y is " <<y << endl;

    cout << "" ;
    cout << "" ;
    cout << "" ;
}

int main(){
    
    int a , b;
    a = 10;
    b = 20;

    swap( &a , &b);

    // Change here also

    cout << "a is " <<a << endl;
    cout << "b is " <<b << endl;
}