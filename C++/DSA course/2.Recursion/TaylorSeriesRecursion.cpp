#include <iostream>
using namespace std;

double taylor( int x , int n){

    static double P =1 , F = 1;
    double r;

    if( n == 0 ){

        return 1;
    }

    else {

    r = taylor( x , n-1);
    P = P*x;
    F = F*n;

    return r + P/F;
    }

}

int main(){

double result;

result = taylor( 1 , 10);
cout << result ;

    
}