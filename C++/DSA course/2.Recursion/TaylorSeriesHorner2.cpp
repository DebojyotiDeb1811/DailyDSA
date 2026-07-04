#include <iostream>
using namespace std;

double taylor( double x , double n){

    static double r = 1;

    if( n==0 ){
        return r;
    }

    else{
    r =  1 + (x/n) * r;
    return taylor( x , n-1);
    }
}

int main(){

    double result;
    result = taylor( 1 , 10);

    cout << result;

}